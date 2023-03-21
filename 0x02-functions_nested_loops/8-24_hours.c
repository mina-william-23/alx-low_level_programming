#include "main.h"

/**
 * jack_bauer - print time to 23:59
 *
 * Description: write counter to print time
 * from 00:00 to 23:59
 * as the style of series 24 and main character jack
 */

void jack_bauer(void)
{
	for (int i = 0; i < 24; i++)
	{
		for (int j = 0; j < 60; j++)
		{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			_putchar(':');
			_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
			_putchar('\n');
		}
	}
}
