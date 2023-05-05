#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the number
 * @index: the index
 * Return: status 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	if (*n & m)
		*n ^= i;

	return (1);
}
