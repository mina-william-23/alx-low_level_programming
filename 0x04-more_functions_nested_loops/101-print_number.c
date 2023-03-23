#include "main.h"
#include <stdio.h>

/**
 * print_number - print integer using _putchar
 * @n: inserted integer
 * Description: reverse the number first
 * then print it using _putchar()
 */

void print_number(int n)
{
	unsigned int old = n;

	if (n < 0)
	{
		old = -old;
		_putchar('-');
	}

	if (old / 10 > 0)
		print_number(old / 10);
	_putchar('0' + (old % 10));
}
