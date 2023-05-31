#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @a: the name of the array
 * @n: is the number of elements of the array to be printed
 * Return a nad n
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < (n - 1); b++)
	{
		printf("%d, ", a[b]);
	}

	if (b == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
