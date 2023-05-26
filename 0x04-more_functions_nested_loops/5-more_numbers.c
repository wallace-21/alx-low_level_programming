#include <stdio.h>
#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int n;
	int a;

	for (n = 1; n <= 10; n++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 10)

				putchar('1');
			putchar(a % 10 + '0');
		}
	putchar('\n');
	}
}
