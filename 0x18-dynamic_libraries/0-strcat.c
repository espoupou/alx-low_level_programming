#include "main.h"

/**
 * _strcat - concatanate two string
 * @dest: destination string
 * @src: source string
 * Return: the full string starting with dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (*(dest + i) != '\0')
		i++;

	for (j = 0; *(src + j) != '\0'; j++)
	{
		*(dest + i + j) = *(src + j);
	}
	*(dest + i + j) = '\0';

	return (dest);
}
