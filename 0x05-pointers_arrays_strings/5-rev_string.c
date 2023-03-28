#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */

void rev_string(char *s)
{
	int c = 0, i;
	char temp;

	while (s[c] != '\0')
	{
		c++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + c - i - 1);
		*(s + c - i - 1) = temp;
	}
}
