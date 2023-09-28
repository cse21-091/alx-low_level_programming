#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *y)
{
	int x;
	unsigned int dec_val = 0;

	if (!y)
		return (0);

	for (x = 0; y[x]; x++)
	{
		if (y[x] < '0' || y[x] > '1')
			return (0);
		dec_val = 2 * dec_val + (y[x] - '0');
	}

	return (dec_val);
}

