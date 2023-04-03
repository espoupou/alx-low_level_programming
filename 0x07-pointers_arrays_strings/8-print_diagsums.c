#include "main.h"
#include <stdio.h>

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
		s += *(a + i * size + i);
	}
	printf("%d, ", s);
	for (i = size - 1, s = 0; i >= 0; i--)
	{
		s += *(a + i * size + (size - i - 1));
	}
	printf("%d\n", s);
}
