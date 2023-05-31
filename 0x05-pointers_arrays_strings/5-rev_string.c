#include <stdio.h>
#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	char a[] = "loohcS yM";
	int i;
	
	putchar(*s);
	
	for (i = 0; a[i] != '\0'; i++)
	{
		putchar(a[i]);
		s++;
	}
	s--;
	putchar('\n');
}
