#include "main.h"

/**
 * swap_int - swap two int variables
 *
 * @a: variable int a
 * @b: variable int b
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
