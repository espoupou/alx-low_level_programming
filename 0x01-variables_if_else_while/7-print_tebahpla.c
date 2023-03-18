#include <stdio.h>

/**
 * main- Entry point
 * @void: Null value
 *
 * Description: Print alphabet lowercase
 * Return: Zero value
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
