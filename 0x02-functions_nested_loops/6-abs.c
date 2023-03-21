#include "main.h"

/**
 * _abs - compute absolute value of integer
 * @n: tested integer
 *
 * Return: the asbolute value of (n)
 */

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
