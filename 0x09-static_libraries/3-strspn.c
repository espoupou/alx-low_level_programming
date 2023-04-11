#include "main.h"
#include <string.h>

/**
 * _strspn -  gets the length of a prefix substring.
 * @s: the string
 * @accept: acceptable byte
 * Return: the length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (s[i] && strchr(accept, s[i]))
		i++;

	return (i);
}
