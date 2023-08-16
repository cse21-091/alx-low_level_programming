#include "main.h"

/**
* print_times_table - prints the n times table, starting with 0
* @n: the number to print the times table for
*
* Return: void
*/

void print_times_table(int n)
{
	int i, product;
	
	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= 10; i++)
	{
		product = i * n;
		if (i == 0)						
		{
			_putchar('0' + product);
		}
		else if (product < 10)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + product);
		}
		else if (product < 100)
		{
			_putchar(' ');
			_putchar('0' + (product / 10));
			_putchar('0' + (product % 10));
		}
		else
		{
			_putchar('0' + (product / 100));
			_putchar('0' + ((product / 10) % 10));
			_putchar('0' + (product % 10));
		}
		if (i != 10)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
