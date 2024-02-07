#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - function that prints the contents of a subarray
 * @a: pointer to the first element of the array
 * @start: start index of the subarray
 * @end: end index of the subarray
 */

void print_array(int *a, size_t start, size_t end)
{
	size_t i;

	for (i = start; i < end; i++)
	{
		printf("%d, ", a[i]);
	}

	if (i == end)
	{
		printf("%d", a[end]);
	}

	printf("\n");
}

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: -1
 * Return: the first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = size - 1;
	size_t mid;

	while (start <= end)
	{
		printf("Searching in array: ");
		print_array(array, start, end);

		mid = start + (end - start) / 2;

		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}

	return (-1);
}
