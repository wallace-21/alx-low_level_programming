#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: The number to print in binary.
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int value = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int zeros = 1;

	while (value != 0)
	{
		if ((n & value) != 0)
		{
			zeros = 0;
			_putchar('1');
		}
		else
		{
			if (!zeros)
			{
				_putchar('0');
			}
		}
		value >>= 1;
	}
	if (zeros)
	{
		_putchar('0');
	}
}
