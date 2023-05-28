#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 * Return: void
 */

void jack_bauer(void)
{
	int a;
	int c;

	for (c = 0; c < 24; c++)
	{
		for (a = 0; a < 60; a++)
		{
			_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
			_putchar(':');
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar('\n');
		}
	}
}


