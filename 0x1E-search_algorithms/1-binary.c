#include "search_algos.h"
/**
 * binary_search - searches for a value in an array of integers
 * using the Binary search algorithm
 * @array: pointer to head of list
 * @size: size of array
 * @value: value to search
 * Return: found value or -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);
	left = 0;
	right = size - 1;
	while (left <= right)
	{
		printf("Searching in array: ");
		/* print array except last element */
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		/* print last element */
		printf("%d\n", array[i]);
		/* calculate middle */
		i = left + (right - left) / 2;
		if (array[i] < value)
			left = i + 1;
		else if (array[i] > value)
			right = i - 1;
		else
			return (i);
	}
	return (-1);
}
