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
	int old = n, rev = 0;

	if (old < 0)
		old *= -1;

	while (old != 0)
	{
		rev *= 10;
		rev += old % 10;
		old  /= 10;
	}
	if (n < 0)
		_putchar('-');
	while (rev != 0)
	{
		_putchar('0' + (rev % 10));
		rev /= 10;
	}
	if (n == 0)
		_putchar('0');


}
