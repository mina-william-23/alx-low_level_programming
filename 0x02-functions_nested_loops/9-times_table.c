#include "main.h"

/**
 * times_table - print 0-9 times table
 *
 * Return: (0) success
 */

void times_table(void)
{
	int i, j, num;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			num = i * j;
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (num > 9)
				{
					_putchar('0' + (num / 10));
					_putchar('0' + (num % 10));
				}
				else
				{
					_putchar(' ');
					_putchar('0' + num);
				}
			}
			else
			{
				_putchar('0' + num);
			}
		}
		_putchar('\n');
	}
}
