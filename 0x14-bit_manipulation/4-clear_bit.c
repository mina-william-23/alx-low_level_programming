#include "main.h"
/**
 * clear_bit - clear bit at index to be 0
 * @n: pointe rto n
 * @index: index of bit to be set
 * Return: 1 success -1 failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
