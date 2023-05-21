#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int a;

	for (a = 0; a < 52; a++)
	{
		putchar(alphabet[a]);
	}
	putchar('\n');
	return (0);
}
