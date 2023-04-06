#include "main.h"

/**
 * palin - is palindrome
 * @ch: the string
 * @a: the first c
 * @b: the second c
 * Return: 1 or 0
 */

int palin(char *ch, int a, int b)
{
	if (a > b)
		return (1);

	return ((ch[a] == ch[b]) && palin(ch, ++a, --b));
}

/**
 * _strlen_recursion - lenght
 * @s: the string
 * Return: the length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - chack palindrome
 * @s: the string
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	if (s[0] == '\0')
		return (1);
	return (palin(s, 0, _strlen_recursion(s) - 1));
}
