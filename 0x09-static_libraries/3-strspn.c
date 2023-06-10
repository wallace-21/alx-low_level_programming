#include <stdio.h>
#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string
 * @accept: string
 * Return:  the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int store = 0;

	int t;
	int i;

	for (t = 0; s[t] != '\0'; t++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[t] == accept[i])
			{
				store++;
				break;

			}
		}
		if (accept[i] == '\0')
			return (store);
	}

	return (store);
}
