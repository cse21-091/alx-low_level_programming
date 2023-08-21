#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 * @s: The string the is printed in reverse
 * Return: Null
 */
void print_rev(char *s)
{
int x;
int y;

x = 0;
y = 0;

while (s[x] != 0)
{
y++;
x++;
}
y -= 1;
while (s[y] != 0)
{
_putchar(s[y]);
--y;
}
_putchar('\n');
return;
}
