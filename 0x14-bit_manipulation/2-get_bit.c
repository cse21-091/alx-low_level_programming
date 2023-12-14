#include "main.h"

/**
 * get_bit - returns value of a bit at an index in a deci num.
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int p)
{
	int bit_Valu;

	if (p > 63)
		return (-1);

	bit_Valu = (n >> p) & 1;

	return (bit_Valu);
}

