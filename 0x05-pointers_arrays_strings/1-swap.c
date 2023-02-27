#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 * Return: Always 0 (succes
 */

void swap_int(int *a, int *b)
{
	int man = *a;
	*a = *b;
	*b = man;
}
