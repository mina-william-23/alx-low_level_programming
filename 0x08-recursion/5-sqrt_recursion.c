#include "main.h"
/**
 * _sqrt_recursion2 - calculate squreroot of number
 * @n: input
 * @x: square root start
 * Return: squre root of n
*/
int _sqrt_recursion2(int n, int x)
{
	if (x < 0)
		return (-1);
	if (x * x == n)
		return (x);
	_sqrt_recursion2(n, x - 1);
}
/**
 * _sqrt_recursion - calculate squreroot of number
 * @n: input
 * Return: squre root of n
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_recursion2(n, n / 2));
}
