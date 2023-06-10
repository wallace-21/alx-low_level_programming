#include <stdio.h>
#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: destination
 * @src: memory area
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n; t++)
	{
		dest[t] = src[t];
	}

	return (dest);
}
