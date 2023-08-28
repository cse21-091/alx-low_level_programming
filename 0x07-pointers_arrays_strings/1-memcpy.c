#include "main.h"

/**
 * _memcpy - copies memory area from src to dest
 * @src: source string
 * @dest: destination string
 * @n: size to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
