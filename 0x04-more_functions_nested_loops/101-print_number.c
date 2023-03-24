#include "main.h"

/**
 * main - prints an integer.
 * Return: Always 0.
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
	}
	print_number(n);
	_putchar('0' + (n / 10));
}
