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

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
