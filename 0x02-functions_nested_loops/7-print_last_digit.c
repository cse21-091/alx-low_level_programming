#include "main.h"
/**
* print_last_digit - this function prints the last digit of a number
*
* @c: int n will be used in the argument of a function
*
* Return: Always 0 (Success), this will not be invoked here
*
*
*/

int print_last_digit(int c)
{
	int last_digit = c % 10;

	if (last_digit < 0)
		last_digit = -last_digit;
	_putchar(last_digit + '0');
	return (last_digit);
}
