#include "main.h"

/**
 * print_rev - print strig in reverse mode
 *
 * @s: pointer to string
 */

void print_rev(char *s)
{
	int length;

	length = _strlen(s);
	while (length != -1)
	{
		_putchar(*(s + length));
		length--;
	}
	_putchar('\n');
}
