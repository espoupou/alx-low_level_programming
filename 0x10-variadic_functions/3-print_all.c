#include "variadic_functions.h"
#include <stdio.h>

/**
 * sep - serator print
 * @i: int
 * Return: nothing
 */

void sep(char c, int i)
{
	const char flags[] = "cifs";
	int j = 0;

	while (flags[j])
	{
		if (c == flags[j] && i > 0)
		{
			printf(", ");
			return;
		}
		j++;
	}
}

/**
 * print_all -  prints anything.
 * @format: the var type format
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list l;
	unsigned int i = 0;
	char *s;

	va_start(l, format);
	while (format && format[i])
	{
		sep(format[i], i);
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(l, int));
			break;
		case 'i':
			printf("%d", va_arg(l, int));
			break;
		case 'f':
			printf("%f", va_arg(l, double));
			break;
		case 's':
			s = va_arg(l, char *);
			if (!s)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		}
		i++;
	}
	printf("\n");
	va_end(l);
}
