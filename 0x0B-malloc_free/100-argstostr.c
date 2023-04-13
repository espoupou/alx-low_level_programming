#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument counter
 * @av: argument vector
 * Return: pointer to string of concatanation
 */

char *argstostr(int ac, char **av)
{
	char *s = NULL;
	int i, n, l = 0, r;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	s = malloc(sizeof(char) * l + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			s[r] = av[i][n];
			r++;
		}
		if (s[r] == '\0')
		{
			s[r++] = '\n';
		}
	}
	return (s);
}
