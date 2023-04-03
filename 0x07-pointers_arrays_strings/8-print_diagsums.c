#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - print diagonal sum in both directions
 * @a: pointer to matrix
 * @size: size of single dimention array in matrix
*/
void print_diagsums(int *a, int size)
{
	long int digsum1 = 0, digsum2 = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				digsum1 += *(a + (i * size + j));
			if (i + j == size - 1)
				digsum2 += *(a + (i * size + j));
		}
	}
	printf("%ld, %ld\n", digsum1, digsum2);
}
