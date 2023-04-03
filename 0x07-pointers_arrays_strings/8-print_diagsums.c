#include "main.h"

/**
 * print_diagsums - print diagonals sum
 * @a: the matrix
 * @size: the matrix size
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, s;

	for (i = 0, s = 0; i < size; i++)
	{
		s += a[i][i];
	}

	printf("%d, ", s);

	for (i = 0, s = 0; i < size; i++)
	{
		s += a[i][size - i - 1];
	}

	printf("%d", s);
}
