#include "main.h"

/**
* jack_bauer - This function that prints every minute of
* Jack Bauer's day,
*
* There is no argument in the entry point
*
* Return: Always 0 (Success), this will not be invoked here
*
*/

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
