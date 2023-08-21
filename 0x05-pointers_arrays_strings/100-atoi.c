#include "main.h"
#include <stdio.h>

/**
 * _atoi - prints the value of integer in a string
 * @s: The string the function is working on
 * Return: an integer
 */

int _atoi(char *s)
{
int x;
int si;
int v;

x = 0;
si = 1;
v = 0;

while (s[x] != '\0' && (s[x] < '0' || s[x] > '9'))
{
if (s[x] == '-')
{
si = si * -1;
}
x++;
}

while (s[x] != '\0' && s[x] >= '0' && s[x] <= '9')
{
v = v * 10 + si * (s[x] - '0');
x++;
}

return (v);
}
