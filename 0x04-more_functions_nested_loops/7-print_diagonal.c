#include "main.h"

/**
 * print_diagonal - print diagnal by '\'
 * @n: numbers of lines
 * Description: everyline should have spaces
 * equal to line numbers before '\' printed
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');

		_putchar('\\');
		if (i < n - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
