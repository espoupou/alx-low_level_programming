#include "main.h"

/**
 * check - check separator
 * @s: the string
 * @i: position
 * Return: 0 or 1
 */

int check(char *s, int i)
{
	return (i == 0 || s[i - 1] == ' ' || s[i - 1] == ',' || s[i - 1] == ';' ||
		s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?' ||
		s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' ||
		s[i - 1] == ',' || s[i - 1] == '{' || s[i - 1] == '}' ||
		s[i - 1] == '\t' || s[i - 1] == '\n');
}

/**
 * cap_string - capitalize
 * @s: the string
 * Return: Capitalized
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z' && check(s, i))
			s[i] = s[i] + 'A' - 'a';
		i++;
	}

	return (s);
}
