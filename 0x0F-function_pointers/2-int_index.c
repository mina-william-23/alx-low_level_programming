#include "function_pointers.h"
/**
 * int_index - return first index element that cmp gives true with it
 *
 * @array: array of int
 * @size: size of array
 * @cmp: compare algorithm return (1) or (0)
 *
 * Return: on fail (-1) if size <= 0 or cmp return false
 * on success (index of first element that cmp gives true with it)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1)
}
