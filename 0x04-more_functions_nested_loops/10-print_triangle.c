#include "main.h"

/**
 * print_triangle - print using '#' and space
 * @size: length of base of triangle
 */

void print_triangle(int size)
{
	int i, space, hash;

	for (i = 1; i <= size; i++)
	{
		for (space = 1; space <= (size - i); space++)
			_putchar(' ');
		for (hash = 1; hash <= i; hash++)
			_putchar('#');
		if (i < size)
			_putchar('\n');
	}
	_putchar('\n');
}
