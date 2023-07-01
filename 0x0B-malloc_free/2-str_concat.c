#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: merge
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int length1 = 0, length2 = 0;
	char *merge;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[length1] != '\0')
	{
		length1++;
	}

	while (s2[length2] != '\0')
	{
		length2++;
	}
	merge = malloc(length1 + length2 + 1 * sizeof(char));
	if (merge == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length1; i++)
	{
		merge[i] = s1[i];
	}

	for (j = 0; j < length2; j++)
	{
		merge[i + j] = s2[j];
	}
	merge[length1 + length2] = '\0';
	return (merge);
}
