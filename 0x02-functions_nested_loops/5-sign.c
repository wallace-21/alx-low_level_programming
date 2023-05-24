#include <stdio.h>
#include "main.h"

/**
 * print_sign -  a function that prints the sign of a number
 * @n: numbers that are going to be checked
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero, -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
