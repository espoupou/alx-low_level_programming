#include "main.h"

/**
 *print_last_digit - Print last digit
 *
 * @n: the number
 *
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
/*
	if (n < 0)
	{
		n = -n;
	}
	_putchar('0' + (n % 10));
	return (n % 10);
*/
}
