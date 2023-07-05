#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: merge
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1 = 0, length2 = 0;
	char *merge;
	unsigned int i, j;

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
	if (n >= length2)
	{
		n = length2++;
	}
	merge = malloc((length1 + n + 1) * sizeof(char));
	if (merge == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length1; i++)
	{
		merge[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		merge[i + j] = s2[j];
	}
	merge[i + j] = '\0';
	return (merge);
}
