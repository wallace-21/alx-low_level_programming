#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Write a function that print the alphabet, in lowercase
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
