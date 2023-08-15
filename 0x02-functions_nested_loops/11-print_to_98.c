#include <stdio.h>
#include "main.h"

/**
* print_to_98 - This function prints to 98
* from any numeric value. the outputs are seperated
* by commas
*
* @n: This is te integer value to be supplied externally
*
*/

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("98\n");
}
