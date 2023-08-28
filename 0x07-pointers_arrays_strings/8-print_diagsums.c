#include "main.h"
#include "stdio.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a matrix
 * @a: pointer to matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i = 0;

	while (i < size)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + size - i - 1];
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
