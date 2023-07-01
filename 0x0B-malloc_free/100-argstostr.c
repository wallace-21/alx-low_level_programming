#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: array of arguments
 * Return: Pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int length = 0;
	int i, j;
	char *merge;
	int track = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			length++;
			j++;
		}
		length++;
	}
	merge = malloc(length + 1 * sizeof(char));
	if (merge == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			merge[track] = av[i][j];
			track++;
			j++;
		}
		merge[track] = '\n';
		track++;
	}
	merge[track] = '\0';
	return (merge);
}
