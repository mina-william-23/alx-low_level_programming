#include <stdio.h>

/**
 * startBeforeMain - prints before the main function
 */
void __attribute__ ((constructor)) startBeforeMain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
