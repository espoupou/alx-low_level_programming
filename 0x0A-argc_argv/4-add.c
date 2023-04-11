#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _isdigit - checks if parameter is a number between 0 to 9.
 * @c: input char.
 * Return: 1 if is a number (0 to 9), 0 in other case.
 */
int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _isnum - check if string is number
 * @s: the string
 * Return: 0 or 1
 */

int _isnum(char *s)
{
	unsigned long int i;

	for (i = 0; i < strlen(s); i++)
	{
		if (_isdigit(s[i]) == 0)
			return (0);
	}
	return (1);
}

/**
 * main - add positive numbers
 * @argc: arguments count
 * @argv: arguments
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int i, s = 0;

	for (i = 1; i < argc; i++)
	{
		if (_isnum(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			s += atoi(argv[i]);
		}
	}
	printf("%d\n", s);
	return (0);
}
