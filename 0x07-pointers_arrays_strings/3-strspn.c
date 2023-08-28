#include "main.h"

/**
 * if_exist - check if character exists in a string
 * @s: string
 * @c: character to find
 * Return: 1 or 0
 */

int if_exist(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/**
 * _strspn - get length of a prefix substring
 * @s: string
 * @accept: string of accpeted characters
 * Return: length of prefix found
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	unsigned int i = 0;
	unsigned int j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				while (if_exist(accept, s[i]))
				{
					i++;
					n++;
				}
				return (n);
			}
			j++;
		}
		i++;
	}
	return (n);
}
