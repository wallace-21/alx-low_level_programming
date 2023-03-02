#include "main.h"
#include <stdio.h>

/**
 * *_strcat - function that concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{

	int man = 0, i;

	while (dest[man])
	{
		man++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[man] = src[i];
		man++;
	}

	dest[man] = '\0';
	return (dest);
}
