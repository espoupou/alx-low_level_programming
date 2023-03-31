#include "main.h"

/**
 * _strncpy - copy n bit of src to dest
 * @dest: destination string
 * @src: source string
 * @n: the number of bit
 * Return: the dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; *(src + i) != '\0' && i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	/*(dest + i) = '\0';*/

	return (dest);
}
