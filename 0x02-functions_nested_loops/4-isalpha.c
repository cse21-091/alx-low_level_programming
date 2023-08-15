#include "main.h"
/**
* _isalpha - checks and prints 1 for uppercase alphabet
* and 0 for non lowercase
*
* @c: is the int that will be used for argument of the function
*
* Description: this code uses the _putchar function to display/print
* its contents
*
* Return: Always 0 (Success), this will not be invoked here
*
*/

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}
