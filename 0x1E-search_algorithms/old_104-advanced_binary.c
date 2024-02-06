#include "search_algos.h"
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
	size_t i, left, right;
	int ans;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;
	ans = -1;
	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
	i = left + (right - left) / 2;
	if (size == 1)
		ans = array[i] == value ? (int)i : -1;
	else if (array[i] == value)
	{
		if (array[i - 1] == value)
			ans = (advanced_binary(array, i + 1, value));
		else
			ans = i;
	}
	else if (array[i] < value)
	{
		ans = advanced_binary(array + i + 1, size - i - 1, value);
		if (ans != -1)
			ans = (int)i + 1 + ans;
	}
	else if (array[i] > value)
		ans = advanced_binary(array, i, value);
	return (ans);
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
