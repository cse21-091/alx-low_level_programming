#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: The string that is required to reverse
 * Return: null
 */
void rev_string(char *s)
{
int x;
int y;
int hy;
char sa;
char sb;

x = 0;
y = 0;

while (s[x] != 0)
{
y++;
x++;
}

hy = y / 2;
y = y - 1;

for (x = 0; x < hy; x++)
{
sa = s[0 + x];
sb = s[y - x];
s[0 + x] = sb;
s[y - x] = sa;
}
return;
}
