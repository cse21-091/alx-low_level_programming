#include "main.h"

/**
 * append_text_to_file - appends text at end of file.
 * @filename: pointer to file name.
 * @text_content: string to add to at end of file.
 *
 * Return: - -1, If function fails or filename is NULL.
 *        - -1, If file doesn`t exist the user can`t write permission.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int q, p, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	q = open(filename, O_WRONLY | O_APPEND);
	p = write(q, text_content, leng);

	if (q == -1 || p == -1)
		return (-1);

	close(q);

	return (1);
}

