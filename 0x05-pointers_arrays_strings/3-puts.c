#include "main.h"
#include <stdio.h>

/**
 * _puts - prints out a string
 * @str: the string wanting to be printed
 * Return: Null
 */
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
