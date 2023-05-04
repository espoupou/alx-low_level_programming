#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary string
 * Return: equivalent int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int u;
	int i = 1;
	char *p;

	if (!b)
		return (0);

	u = 0;

	for (p = b; *p != '\0'; p++)
		;

	for (p--; p != b - 1; i *= 2)
	{
		if (*p != '0' && *p != '1')
		{
			return (0);
		}

		if (*p & 1)
		{
			u += i;
		}
	}

	return (u);
}
