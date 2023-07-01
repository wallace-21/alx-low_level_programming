#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: string
 * Return: duplicate
 */

char *_strdup(char *str)
{
	int i;
	int length = 0;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}
	duplicate = malloc(length + 1 * sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[length] = '\0';
	return (duplicate);
}
