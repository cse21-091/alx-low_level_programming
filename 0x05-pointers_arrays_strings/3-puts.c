#include "main.h"
#include <stdio.h>

/**
 * _pust - prints out a string 
 * @str: the string to be printed
 * return : null 
 **/
void _puts(char *str)
{
	int x;

	x = 0;
	while (str[x] != 0)
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
	return;
}
