#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory aeria
 * @b: the byte
 * @n: number of byte
 * Return: s adress
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p;

	for (p = s; p - s < n; p++)
	{
		*p = b;
	}

	return (s);
}
