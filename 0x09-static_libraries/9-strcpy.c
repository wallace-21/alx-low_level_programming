#include <stdio.h>
#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src, i
 * ncluding the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: string
 * @src: pointer
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int t;

	while (*(src + t) != '\0')
	{
		t++;
	}

	for ( ; i < t ; i++)
	{
		dest[i] = src[i];
	}

	dest[t] = '\0';

	return (dest);
}
