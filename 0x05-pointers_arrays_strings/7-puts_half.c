#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints out the second half of a string
 * @str: the string the function is working on
 * Return: Null
 */
void puts_half(char *str)
{
int x;
int y;

x = 0;
y = 0;

while (str[x] != 0)
{
y++;
x++;
}

if (y % 2 != 0)
{
x = y - ((y - 1) / 2);
}
else
{
x = y / 2;
}

while (str[x] != 0)
{
_putchar(str[x]);
++x;
}
_putchar('\n');
return;
}
