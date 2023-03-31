#include "main.h"
/**
 * infinite_add - add two strings as numbers
 * @n2: string pointer2
 * @n1: string pointer1
 * @r: array of chars result
 * @size_r: size of array r
 * Return: pointer to r
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sz1 = 0, sz2 = 0, sz3 = size_r - 1, carry = 0;

	r[size_r - 1] = '\0';

	while (n1[sz1])
		sz1++;
	while (n2[sz2])
		sz2++;

	while ((sz1 || sz2) && sz3)
	{
		if (sz1)
		{
			carry += *(n1 + sz1 - 1) - '0';
			sz1--;
		}
		if (sz2)
		{
			carry += *(n2 + sz2 - 1) - '0';
			sz2--;
		}
		r[sz3 - 1] = (carry % 10) + '0';
		sz3--;
		carry /= 10;
	}
	if (sz1 == 0 && sz2 == 0)
	{
		if (carry && sz3)
		{
			r[sz3 - 1] = (carry % 10) + '0';
			sz3--;
			carry /= 10;
		}
		if (!carry && sz3 >= 0)
			return (r + sz3);
	}
	return (0);
}
