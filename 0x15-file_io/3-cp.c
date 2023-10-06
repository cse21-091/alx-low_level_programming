#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_argument_count - checks for the correct number of arguments
 * @argc: number of command-line arguments
 *
 * Return: void
 */
void check_argument_count(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check_file_readability - checks that file_from exists and can be read
 * @result: result of a check (true or false)
 * @file_name: name of the file_from
 * @fd_from: file descriptor of file_from, or -1
 * @fd_to: file descriptor of file_to, or -1
 *
 * Return: void
 */
void check_file_readability(ssize_t result, char *file_name, int fd_from, int fd_to)
{
	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * check_file_writability - checks that file_to was created and/or can be written to
 * @result: result of a check (true or false)
 * @file_name: name of the file_to
 * @fd_from: file descriptor of file_from, or -1
 * @fd_to: file descriptor of file_to, or -1
 *
 * Return: void
 */
void check_file_writability(ssize_t result, char *file_name, int fd_from, int fd_to)
{
	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * check_fd_close - checks that file descriptors were closed properly
 * @result: result of a check (true or false)
 * @fd: file descriptor
 *
 * Return: void
 */
void check_fd_close(int result, int fd)
{
	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: number of command-line arguments
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_result_to, close_result_from;
	ssize_t len_read, len_written;
	char buffer[1024];
	mode_t file_permissions;

	check_argument_count(argc);
	fd_from = open(argv[1], O_RDONLY);
	check_file_readability((ssize_t)fd_from, argv[1], -1, -1);
	file_permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_permissions);
	check_file_writability((ssize_t)fd_to, argv[2], fd_from, -1);
	len_read = 1024;
	while (len_read == 1024)
	{
		len_read = read(fd_from, buffer, 1024);
		check_file_readability(len_read, argv[1], fd_from, fd_to);
		len_written = write(fd_to, buffer, len_read);
		if (len_written != len_read)
			len_written = -1;
		check_file_writability(len_written, argv[2], fd_from, fd_to);
	}
	close_result_to = close(fd_to);
	close_result_from = close(fd_from);
	check_fd_close(close_result_to, fd_to);
	check_fd_close(close_result_from, fd_from);
	return (0);
}

