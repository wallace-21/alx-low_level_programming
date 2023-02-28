#include "main.h"

/**
 * puts2 - rints every other character of a string
 * @str: The prints to be treated
 * Returns: void
 */

void puts2(char *str)
{

	int a;
	int b = 0;

	while (str[b] != '\0')
	{
	b++;
	}

	for (a = 0; a < b; a += 2)
	{
	_putchar(str[a]);
	}
	_putchar('\n');
}
