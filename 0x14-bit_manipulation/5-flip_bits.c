#include "main.h"
/**
 * flip_bits - copute different bits between n,m
 * @n: first num
 * @m: second num
 * Return: number of exclusive different bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int res = 0;

	/* unsigned int i,total_bits, res = 0;*/
	/* total_bits = sizeof(unsigned long int) * 8;*/
	/* for (i = 0; i < total_bits; i++)*/
	/* {*/
	/*	if ((n >> i & 1) != (m >> i & 1))*/
	/*	res++; */
	/*}  */

	n ^= m;
	while (n)
	{
		if (n & 1)
			res++;
		n = n >> 1;
	}
	return (res);
}

