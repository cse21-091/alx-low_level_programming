#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array of numbers in the order of them
 * @a: The array of numbers
 * @n: Number of elements of the array to be printed
 * Return: Null
 */
void print_array(int *a, int n)
{
int x;

for (x = 0; x < n; x++)
{
printf("%i", a[x]);

if (x != n - 1)
{
printf(", ");
}

}
printf("\n");
return;
}
