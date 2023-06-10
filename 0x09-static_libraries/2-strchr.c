#include <stdio.h>
#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: string
 * @c: character
 * Return: s or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)

			return (s);
		s++;
	}

	if (c == '\0')

		return (s);

	return (NULL);
}
