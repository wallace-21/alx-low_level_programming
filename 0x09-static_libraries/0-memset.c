#include <stdio.h>
#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer
 * @b: constant byte
 * @n: number of byter
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n; t++)
	{
		s[t] = b;
	}

	return (s);
}
