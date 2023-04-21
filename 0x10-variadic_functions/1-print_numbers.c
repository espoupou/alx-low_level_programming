#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the separator
 * @n: the size
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list l;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(l, int));
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(l);
}
