#include "main.h"
#include <stdio.h>

/**
 * puts2 - puts some other string instead of entire string 
 * @str: the string , the working function
 * return : null
 * */
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
