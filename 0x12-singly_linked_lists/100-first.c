#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - A sentence to be freed before the main
 * fct is executed
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
