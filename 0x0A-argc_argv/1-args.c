#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	int num = 0;

	(void) *argv;


	for (i = 1; i < argc; i++)
	{
		num++;
	}

	printf("%d\n", num);

	return (0);
}
