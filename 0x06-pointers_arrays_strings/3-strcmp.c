#include "main.h"

/**
 * _strcmp - compare two string
 * @s1: first string
 * @s2: second string
 * Return: integer 0 -1 or 1 depending on the greater than
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] && s2[i] && s1[i] == s2[i]; i++);

	if (s1[i] == s2[i])
	{
		return (0);
	}

	return ((int)*(s1 + i) - (int)*(s2 + i));
}
