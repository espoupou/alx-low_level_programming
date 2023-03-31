#include "main.h"

/**
 * cap_string - capitalize
 * @s: the string
 * Return: Capitalized
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			S[i] = s[i] + 'A' - 'a';
		i++;
	}

	return (s);
}
