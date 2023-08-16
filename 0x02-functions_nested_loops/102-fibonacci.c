#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long fib1 = 1, fib2 = 2, nextFib;

	printf("%ld, %ld", fib1, fib2);

	for (i = 2; i < 50; i++)
	{
		nextFib = fib1 + fib2;
		printf(", %ld", nextFib);
		fib1 = fib2;
		fib2 = nextFib;
	}

	printf("\n");

	return (0);
}
