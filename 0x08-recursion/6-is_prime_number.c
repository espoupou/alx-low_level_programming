#include "main.h"

/**
 * prime - check prime numner
 * @n: the number
 * @i: the checker
 * Return: 0 or 1
 */

int prime(int n, int i)
{
	if (i > 1)
	{
		if (n % i == 0)
			return (0);
		else
			return (prime(n, i - 1));
	}
	else
		return (1);
}

/**
 * is_prime_number - prime numbers
 * @n: the number
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n < 0 || n == 1)
		return (0);
	return (prime(n, n - 1));
}
