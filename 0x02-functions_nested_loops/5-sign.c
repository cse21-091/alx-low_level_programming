#include "main.h"

/**
* print_sign - function checks and
* prints the sign of a number
*
* @n: is the int that will be used for the argument of the function
*
* Return: returns 1 and 0 depending on condition
*
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
