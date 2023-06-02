#include <stdio.h>
#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination
 * @src: string
 * @n: characters to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int append;

	for (append = 0; append < n && src[append] != '\0'; append++)
	{
		 dest[append] = src[append];
	}

	for (; append < n; append++)
	{
		 dest[append] = '\0';
	}
	return (dest);
}
