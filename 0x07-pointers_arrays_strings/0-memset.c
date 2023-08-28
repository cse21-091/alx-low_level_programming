#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to memory area to be filled
 * @b: Byte to fill memory with
 * @n: Number of bytes to fill
 *
 * Return: Pointer to the filled memory area (@s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

