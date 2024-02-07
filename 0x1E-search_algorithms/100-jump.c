#include "search_algos.h"
#include <math.h>
/**
  * jump_search - Searches for a value in a sorted array
  *	of integers using jump search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *		 Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  *			  Uses the square root of the array size as the jump step.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t last_jump, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	last_jump = jump = 0;
	while (jump < size && array[jump] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		last_jump = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", last_jump, jump);

	jump = jump < size - 1 ? jump : size - 1;
	while (last_jump < jump && array[last_jump] < value){
		printf("Value checked array[%ld] = [%d]\n", last_jump, array[last_jump]);
		last_jump++;
	}
	printf("Value checked array[%ld] = [%d]\n", last_jump, array[last_jump]);

	return (array[last_jump] == value ? (int)last_jump : -1);
}
