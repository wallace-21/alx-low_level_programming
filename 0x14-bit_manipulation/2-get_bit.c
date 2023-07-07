#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: input number
 * @index: the index
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int maximum = sizeof(unsigned long int) * 8 - 1;
	unsigned long int value = 1UL << index;

	if (index > maximum)
	{
		return (-1);
	}

	if ((n & value) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

