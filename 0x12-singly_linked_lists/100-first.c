#include <stdio.h>

/**
 * print_before_main - Prints a specific message before the main function executes.
 */
void __attribute__((constructor)) print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

