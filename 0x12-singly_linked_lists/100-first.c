#include <stdio.h>

void before_main(void) __attribute__((constructor));

/**
 * bmain - function executed before main
 * Return: no return.
 */

void before_main(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
