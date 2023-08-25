#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to be appended.
 * @n: Maximum number of bytes to append from src.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}

