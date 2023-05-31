#include <stdio.h>
#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int l = 0;
	int r = 0;
	int a;
	char *d = str;


	while (*d != '\0')
	{
		d++;
		l++;
	}
	r = l - 1;

	for (a = 0; a <= r; a++)
	{
		if (a % 2 == 0)
		{
			putchar(str[a]);
		}
	}
	putchar('\n');
}
