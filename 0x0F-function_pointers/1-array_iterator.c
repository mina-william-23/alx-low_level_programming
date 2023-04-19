#include "function_pointers.h"
/**
 * array_iterator- perform function action to all array members
 * @array: array of ints
 * @size: size of array
 * @action: function pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
