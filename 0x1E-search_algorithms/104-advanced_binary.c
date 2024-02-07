#include "search_algos.h"
/**
* helper - searches for a value in an array of integers
* using the Binary search algorithm
* @array: pointer to head of list
* @left: low
* @right: high
* @value: value to search
* Return: found value or -1
*/
int helper(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (left == right)
	{
		printf("Searching in array: %d\n", array[left]);
		return (array[left] == value ? (int)left : -1);
	}
	if (left < right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = left + (right - left) / 2;
		if (array[i] < value)
			return (helper(array, i + 1, right, value));
		if (array[i] > value)
			return (helper(array, left, i - 1, value));
		if (left == i)
			return (i);
		return (helper(array, left, i, value));
	}
	return (-1);
}
/**
* advanced_binary - searches for a value in an array of integers
* using the Binary search algorithm
* return the index of the first value in the array
* (if this value appears more than once in the array)
* @array: pointer to head of list
* @size: size of array
* @value: value to search
* Return: found value or -1
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (helper(array, 0, size - 1, value));
}
/* iterative way*/

/**
 * advanced_binary - searches for a value in an array of integers
* using the Binary search algorithm
* return the index of the first value in the array
* (if this value appears more than once in the array)
* @array: pointer to head of list
* @size: size of array
* @value: value to search
* Return: found value or -1
* int advanced_binary(int*array, size_t size, int value)
* {
* size_t i, left, right, ans;
*
* if (array == NULL)
* return (-1);
* left = 0;
* right = size - 1;
* ans = -1;
* while (left < right)
* {
* printf("Searching in array: ");
*
* for (i = left; i < right; i++)
* printf("%d, ", array[i]);
*
* printf("%d\n", array[i]);
*
* i = left + (right - left) / 2;
* if (array[i] < value)
* left = i + 1;
* else if (array[i] >= value)
* right = i;
* }
* if (array[right] == value)
* ans = right;
* return (ans);
* }
*/
