#include "main.h"

/**
 * print_sign -  print sign + - 0
 * @n: tested number
 *
 * Return: (1) if > zero
 * (-1) if < zero
 * (0) if equal zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
