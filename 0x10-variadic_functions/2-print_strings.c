#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the separator
 * @n: the size
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list l;
	unsigned int i;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(l, char *));
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(l);
}
