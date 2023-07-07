#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: input numbers
 * @index: the index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= value;
	return (1);
}
