#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: string
 * Return: void
 */

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}
