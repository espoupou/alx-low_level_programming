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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	s = malloc((i + j + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		s[i + j] = s2[j];
	}

	s[i + j] = '\n';
	s[i + j + 1] = '\0';
	return (s);
}

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument counter
 * @av: argument vector
 * Return: pointer to string of concatanation
 */

char *argstostr(int ac, char **av)
{
	char *s = NULL;
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		s = str_concat(s, av[i]);
	}
	return (s);
}
