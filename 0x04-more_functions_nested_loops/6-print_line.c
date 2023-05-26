#include <stdio.h>
#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: the number of times the character _ should be printed
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int a;

		for (a = 1; a <= n; a++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
