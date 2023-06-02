#include <stdio.h>
#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: the array
 * @n: number of things of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int swap;
	int t;

	for (swap = 0; swap < n--; swap++)
	{
		t = a[swap];
		a[swap] = a[n];
		a[n] = t;
	}
}
