#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	putchar('\n');
}
