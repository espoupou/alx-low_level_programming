#include "main.h"

/**
 * _strdup - copy of the string given
 * @str: the string to copy
 * Return: the new string
 */

char *_strdup(char *str)
{
	char *s;
	int i;

	if (str == NULL)
		return (NULL);

	s = malloc(sizeof(char));

	if (s == NULL)
		return (NULL);

	s[0] = str[0];

	for (i = 1; str[i] != '\0'; i++)
	{
		s = realloc(s, i * sizeof(char));
		if (s == NULL)
			return (NULL);
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
