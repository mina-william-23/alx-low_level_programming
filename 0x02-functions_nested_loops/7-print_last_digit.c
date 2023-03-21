#include "main.h"

/**
 * print_last_digit - print last digit of argument
 * @n: integer used to extract the last digit of it
 *
 * Return: return the printed last digit of (n)
 */

int print_last_digit(int n)
{
	int lastdig = n % 10;

	if (n < 0)
		lastdig *= -1;
	_putchar('0' + lastdig);
	return (lastdig);
}
