#include "main.h"

/**
 * _puts - prints string to stdout
 *
 * @str: This is my entry
 *
 */

void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
