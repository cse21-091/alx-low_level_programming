#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to search
 * @accept: The string containing the bytes to look for
 *
 * Return: Pointer to the first occurrence or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		j = 0;
		while (accept[j])
		{
			if (*s == accept[j])
				return (s);
			j++;
		}
		s++;
	}
	return (0);
}

