#include <stdio.h>
#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: string
 * @needle: substructor
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;


		while (*haystack && *n && (*haystack == *n))
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);

		haystack = h + 1;
	}

	return (NULL);
}
