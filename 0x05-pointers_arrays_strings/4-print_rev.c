#include <stdio.h>
#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int l = 0;
	int r;


	while (s[l] != '\0')
	{
		l++;
	}

	for (r = l - 1; r >= 0; r--)
	{
		putchar(s[l]);
		s--;
	}
	putchar('\n');
}
