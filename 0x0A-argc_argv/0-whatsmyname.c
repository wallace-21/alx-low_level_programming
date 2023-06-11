#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - starting point of the program execution
 * @argc: contains the number of arguments passed to the program
 * @argv: a one-dimensional array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
