#include "main.h"
/**
 * get_bit - get bit at index as 1
 * @n: number
 * @index: index of bit to get
 * Return: 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
