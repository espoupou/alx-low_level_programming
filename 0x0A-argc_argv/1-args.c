#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - print arguments count
 * @argc: arguments count
 * @argv: arguments
 * Return: always 0
 */

int main(int argc, char **argv)
{
	UNUSED(argv);
	printf("%d\n", argc);
	return (0);
}
