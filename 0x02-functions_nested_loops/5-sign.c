#include "main.h"

/**
 * print_sign - test a number and print it sign
 *
 * @n: the value to test
 *
 * Return:
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
