#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: returns a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{

	int **t;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);

	t = malloc(height * sizeof(int *));

	if (t == NULL)
	{
		free(t);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		t[i] = malloc(width * sizeof(int));
		if (t[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(t[j]);
			free(t);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			t[i][j] = 0;

	return (t);
}
