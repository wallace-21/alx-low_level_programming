#include <stdio.h>
#include "main.h"

/**
 * _strncat -  function that concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: teminator
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int end;
	int append;

	end = 0;
	while (dest[end] != '\0')
	{
		end++;
	}

	append = 0;
	while (append < n && src[append] != '\0')
	{
		dest[end] = src[append];
		end++;
		append++;
	}

	dest[end] = '\0';
	return (dest);
}
