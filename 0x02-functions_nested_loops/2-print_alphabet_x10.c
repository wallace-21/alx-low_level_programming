#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	char a = 'a';
	int b = 0;

	while (b < 10)
	{
		int c = 0;

		while (c < 26)
		{
			_putchar(a);
			a++;
			c++;
		}
		_putchar('\n');
	b++;
	}
}
