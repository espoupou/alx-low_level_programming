#include <stdio.h>

void before_main() __attribute__((constructor));

/**
 * bmain - function executed before main
 * Return: no return.
 */

void before_main()
{
	printf("You're beat! and yet, you must allow"
		",\nI bore my house upon my back!\n");
}
