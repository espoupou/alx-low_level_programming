#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */

void rev_string(char *s)
{
	int c = 0, i;

	while (s[c] != '\0')
		c++;

	for (i = c; i > 0; i--)
		_putchar(s[c]);
}
