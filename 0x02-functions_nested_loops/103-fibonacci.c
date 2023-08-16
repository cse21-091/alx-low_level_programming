#include <stdio.h>

/**
 * main - Calculates the sum of even-valued terms in the Fibonacci sequence.
 *
 * Return: Always 0.
 */
int main(void)
{
	long fib1 = 1, fib2 = 2, nextFib, sum = 2;

	while (1)
	{
		nextFib = fib1 + fib2;
		if (nextFib > 4000000)
			break;
		if (nextFib % 2 == 0)
			sum += nextFib;
		fib1 = fib2;
		fib2 = nextFib;
	}

	printf("%ld\n", sum);

	return (0);
}
