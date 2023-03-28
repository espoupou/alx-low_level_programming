#include "main.h"

/**
 * print_rev - print reverses a string.
 * @s: input string.
 * Return: no return.
 */

void print_rev(char *s)
{
	int c = 0, i;

	while (s[c] != '\0')
		c++;

	for (i = (c - 1); i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
