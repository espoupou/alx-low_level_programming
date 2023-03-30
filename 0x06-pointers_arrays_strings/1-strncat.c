#include "main.h"

/**
 * _strncat - concatanate n bit of src to dest
 * @dest: destination string
 * @src: source string
 * @n: the number of bit
 * Return: the concatanated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; *(dest + i) != '\0'; i++);
	for (j = 0; *(src + j) != '\0' && j < n; j++)
	{
		*(dest + i + j) = *(src + j);
	}
	*(dest + i + j) = '\0';

	return (dest);
}
