#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: The format string
 * Return: void
 */

void print_all(const char * const format, ...)
{
	char *string, c;
	int i = 0;
	float f;
	va_list args;

	va_start(args, format);
	while (format && format[i + 1])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float)va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				string = va_arg(args, char *);
				if (string == NULL)
					printf("(nil)");
				else
				{
					printf("%s", string);
				}
		}
		if (format[i + 1])
		{
			printf(", ");
			i++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
