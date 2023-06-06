#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a: an array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int t;
	int n;

	for (t = 0; t < 8; t++)
	{
		for (n = 0; n < 8; n++)
			putchar(a[t][n]);
		putchar('\n');
	}
}
