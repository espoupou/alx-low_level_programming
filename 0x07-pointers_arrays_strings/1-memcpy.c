#include "main.h"

/**
 * _memcpy - fills memory with a constant byte
 * @dest: destination memory aeria pointer
 * @src: source memory aeria pointer
 * @n: number of byte
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p;

	for (p = dest; p - dest < n; p++)
	{
		*p = *(src + p - dest);
	}

	return (dest);
}
