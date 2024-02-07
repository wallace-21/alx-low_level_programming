#include <stdio.h>

/**
 * print_array - function that prints the contents of an array
 * @a: pointer to the first element of the array
 * @n: number of elements in the array
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

	/*printf("Searching in array: ");*/
	while (start <= end)
	{
		printf("Searching in array: ");
		print_array(array, size);

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
