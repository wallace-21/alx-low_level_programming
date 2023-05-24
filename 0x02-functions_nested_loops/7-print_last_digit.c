#include <stdio.h>
#include "main.h"

/**
 * print_last_digit -  a function that prints the last digit of a number
 * @n: the integer used to track the last digit
 * Return: the value of the lat digit
 */

int print_last_digit(int n)
{
	int i;

	if (n < 0)

	n = -n;

	i = n % 10;

	if (i < 0)
		i = -i;
	_putchar(i + '0');

	return (i);
}
