#include "main.h"
#include <stdio.h>

/**
 * puts2 - puts every other string instead of an entire string
 * @str: the string the function is working on
 * Return: Null
 */
void puts2(char *str)
{
int x;

x = 0;
while (str[x] != 0)
{
if (x % 2 == 0)
{
_putchar(str[x]);
}
x++;
}
_putchar('\n');
return;
}
