#include "main.h"

/**
 * _strstr - Locate a substring
 * @haystack: The main string
 * @needle: The string to locate
 *
 * Return: Pointer to the first occurrence, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	if (*needle == '\0')
		return (haystack);

	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return (&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}

