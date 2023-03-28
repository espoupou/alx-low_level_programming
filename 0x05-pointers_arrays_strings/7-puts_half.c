#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */

void puts_half(char *str)
{
	int c = 0, i;

	while (str[c] != '\0')
		c++;

	for (i = (int) (c / 2); i < c; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
