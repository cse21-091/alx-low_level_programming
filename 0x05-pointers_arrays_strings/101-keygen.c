#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int succ[100];
	int k, sum, o;

	sum = 0;

	srand(time(NULL));

	for (k = 0; k < 100; k++)
	{
		succ[k] = rand() % 78;
		sum += (succ[k] + '0');
		putchar(succ[k] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			o = 2772 - sum - '0';
			sum += o;
			putchar(o + '0');
			break;
		}
	}

	return (0);
}
