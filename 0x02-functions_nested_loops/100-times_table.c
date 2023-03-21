#include "main.h"

/**
 * print_times_table - print 0-15 times table
 * @n: times to print
 * Return: (0) success
 */

void print_times_table(int n)
{
	int i, j, num = 0;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			num = i * j;
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (num >= 100)
				{
					_putchar('0' + (num / 100));
					_putchar('0' + (num % 100 / 10));
					_putchar('0' + (num % 1000));
				}
				else if (num > 9)
				{
					_putchar(' ');
					_putchar('0' + (num / 10));
					_putchar('0' + (num % 10));
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + num);
				}
			}
			else
				_putchar('0' + num);
		}
		_putchar('\n');
	}
}
