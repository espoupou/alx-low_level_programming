#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy the string src to dest
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (*(src + c) != '\0')
	{
		*(dest + c) = *(src + c);
		c++;
	}
	*(dest + c) = '\0';
	return (dest);
}
