#include <stdio.h>

/**
 * main - a program that prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alphabet[26] = "zyxwvutsrqponmlkjihgfedcba";
	int a;

	for (a = 0; a < 26; a++)
	{
		putchar(alphabet[a]);
	}
	putchar('\n');
	return (0);
}
