#include "main.h"
/**
 * _sqrt - calculate squreroot of number
 * @n: input
 * @x: square root start
 * Return: squre root of n
*/
int _sqrt(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (_sqrt(n, x + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - calculate squreroot of number
 * @n: input
 * Return: squre root of n
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt(n, 1));
}
