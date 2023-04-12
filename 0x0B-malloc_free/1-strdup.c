#include "main.h"

/**
 * _strdup - copy of the string given
 * @str: the string to copy
 * Return: the new string
 */

char *_strdup(char *str)
{
	char *s;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	s = malloc((i + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
