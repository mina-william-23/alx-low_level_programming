#include "main.h"

/**
 * print_line - print line with _putchar
 * @n: number of '_'
 */

void print_line(int n)
{
	int cnt;

	for (cnt = 0; cnt < n; cnt++)
		_putchar('_');
	_putchar('\n');
}
