#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads to print to STDOUT
 * @filename: read txt file
 * @letters: count of letters read
 * return: w- real num of bytes read and displayed
 *        0 when func fail or filename is null
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff= malloc(sizeof(char) * letters);
	t = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fd);
	return (w);
}

