#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string
 * @accept: string
 * Return:  a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int t = 0;

	while (s[t] != '\0')
	{
		int i = 0;

		while (accept[i] != '\0')
		{
			if (s[t] == accept[i])
				return (&s[t]);

			 i++;
		}

		t++;
	}

	return (NULL);
}
