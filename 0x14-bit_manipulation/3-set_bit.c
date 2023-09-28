#include "main.h"

/**
 * setBit - sets a bit at a given index to 1
 * @number: pointer to the number to change
 * @bitIndex: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *number, unsigned int bitIndex)
{
    if (bitIndex > 63)
        return (-1);

    *number = ((1UL << bitIndex) | *number);
    return (1);
}

