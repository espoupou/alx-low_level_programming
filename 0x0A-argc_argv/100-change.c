#include <stdio.h>
#include <stdlib.h>

/**
 * main - change number of coins
 * @argc: arguments count
 * @argv: arguments
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int n, c = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	c += n / 25;
	n %= 25;

	c += n / 10;
	n %= 10;

	c += n / 2;
	n %= 2;

	c += n;

	printf("%d\n", c);

	return (0);
}
