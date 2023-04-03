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
	int	i, j, *p;
	
	for (i = 0; i < size; i++)
	{
		p = a;
		for (j = 0 ; j < size; j++)
			printf("%d ",p[j]);
		p++;
		printf("\n");
	}
}
