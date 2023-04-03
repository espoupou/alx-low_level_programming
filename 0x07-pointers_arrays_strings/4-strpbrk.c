#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string
 * @accept: from byte
 * Return: the stop pointer or null
 */

char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
		return (NULL);
	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}

	return (NULL);
}
