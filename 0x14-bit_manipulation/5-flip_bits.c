#include "main.h"

/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: initial value
 * @m: It holds the value
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	while (result != 0)
	{
		if ((result & 1) != 0)
		{
			count++;
		}
		result >>= 1;
	}
	return (count);
}
