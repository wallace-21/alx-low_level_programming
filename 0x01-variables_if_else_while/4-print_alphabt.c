#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alphabet[24] = "abcdfghijklmnoprstuvwxyz";
	int a;

	for (a = 0; a < 24; a++)

	{
		putchar(alphabet[a]);
	}
	putchar('\n');
	return (0);
}
