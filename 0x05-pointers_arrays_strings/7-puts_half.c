
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

	if (c % 2 == 1)
		i = (c / 2) + 1;
	else
		i = ((c - 1) / 2) + 1;

	for (; i < c; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
