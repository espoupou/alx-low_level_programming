#include "main.h"
#include <stdio.h>

/**
 * print_all -  prints anything.
 * @format: the var type format
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list l;
	int i = 0, j = 0;
	char c;

	while (format[i] != '\0')
	{
		c = format[i];

		switch (c)
		{
			case 'c':
				printf("%c", va_arg(l, char));
				i++;
				break;
			case 'i':
				printf("%d", va_arg(l, int));
				i++;
				break;
			case 'f':
				printf("%f", va_arg(l ,float));
				i++;
				break;
			case 's':
				s = va_arg(l, char *);
				if (s == NULL){
					printf("(nil)");
					i++;
					break;
				}
				printf("%s", va_arg(l, char *));
				i++;
				break;
		}
	}
}
