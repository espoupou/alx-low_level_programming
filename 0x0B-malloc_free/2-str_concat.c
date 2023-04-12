#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: concatenated
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, j = 0;

	s = malloc(sizeof(char));
	if (s == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		s[0] = s1[0];

		for (i = 1; s1[i] != '\0'; i++)
		{
			s = realloc(s, i * sizeof(char));
			if (s == NULL)
				return (NULL);
			s[i] = s1[i];
		}
	}
	if (s2 != NULL)
	{
		s[i] = s2[0];
		for (j = 1; s2[j] != '\0'; j++)
		{
			s = realloc(s, (i + j) * sizeof(char));
			if (s == NULL)
				return (NULL);
			s[i + j] = s2[j];
		}
	}
	s[i + j] = '\0';
	return (s);
}
