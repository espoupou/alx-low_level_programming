#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: the number of parameters
 * Return: the  sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list l;
	int s = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(l, n);
	for (i = 0; i < n; i++)
		s += va_arg(l, int);
	va_end(l);
	return (s);
}
