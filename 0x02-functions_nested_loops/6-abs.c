#include "main.h"
/**
* _abs - function computes the absolute value of an integer
*
* @c: This is the int argument of the function
*
*Return: Always 0 (Success), this will not be invoked here
*/

int _abs(int c)
{
	if (c < 0)
	{
		return (-c);
	}
	else
		return (c);
}
