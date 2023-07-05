#include "main.h"
#include <stdlib.h>

/**
 * _calloc  - function that allocates memory for an array, using malloc
 * @nmemb: elements of an array
 * @size: size of elements
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned char *p;
	unsigned int totalSize;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	p = ptr;
	totalSize = nmemb * size;
	for (i = 0; i < totalSize; i++)
	{
		p[i] = 0;
	}
	return (ptr);
}
