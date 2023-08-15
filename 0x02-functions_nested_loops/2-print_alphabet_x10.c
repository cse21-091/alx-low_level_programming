#include "main.h"

/**
* print_alphabet_x10 - prints the lowercase alphabets
*
* Description: this code uses the _putchar function to display/print
* its contents
*
* Return: Always 0 (Success), this will not be invoked here
*
*
*/

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
