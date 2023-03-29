#include "main.h"

/**
 * reverse_array - reverse the array
 *
 * @a: pointer to array
 * @n: size of array
 */

void reverse_array(int *a, int n)
{
	int half, temp, i;

	half  = n / 2;
	for (i = 0; i < half; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
