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
	char c, d;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
        for (d = 'A'; d <= 'Z'; d++)
                putchar(d);
	putchar('\n');
	return (0);
}
