#include <stdio.h>

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
