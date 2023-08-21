#include "main.h"
#include <stdio.h>

/**
 * _strlen - determine the length of a string 
 * @s:The pointer to the string 
 * Return : the string length of s 
 * */
int _strlen(Char *s)
{
	int y;
	int x;

	x = 0;
	y = 0;
	while (s[x] != 0)
	{
		y++;
		x++;
	}
	return (y);
}
