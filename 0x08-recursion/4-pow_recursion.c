#include "main.h"
/**
 * _pow_recursion - calculate power of number x of power y
 * @x: input number
 * @y: power number
 * Return: power of x
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
