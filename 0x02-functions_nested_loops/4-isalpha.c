#include "main.h"

/**
 * _isalpha - test if isa letter
 *
 * @c: the character
 *
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
