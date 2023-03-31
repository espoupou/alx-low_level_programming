#include "main.h"

/**
 * string_toupper - uppercase
 * @s: string
 * Return: the uppercase string
 */

char *string_toupper(char *s)
{
	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) = *(s + i) + 'A' - 'a';
		else
			*(s + i) = *(s + i);
	}

	*(s + i) = '\0';

	return (s);
}
