#include "main.h"

/**
 * _strchr -  locates a character in a string
 * @s: the string
 * @c: the character
 * Return: pointer to first occurence or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] && s[i] != c; i++)
		;

	if (s[i] == c)
		return (s + i);
	return (NULL);
}
