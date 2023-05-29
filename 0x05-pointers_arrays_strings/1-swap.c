#include <stdio.h>
#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: first  number to be swiped
 * @b: second number to be swiped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
