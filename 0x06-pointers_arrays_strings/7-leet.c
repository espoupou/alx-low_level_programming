#include "main.h"

/**
 * leet - leet conversion
 * @s: the string
 * Return: the leet converted
 */

char *leet(char *s)
{
	char c[] = "aAeEoOtTlL";
	char l[] = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (s[i] == c[j])
			{
				s[i] = l[j];
				break;
			}
		}
	}
	return (s);
}


