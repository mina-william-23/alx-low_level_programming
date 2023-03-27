#include "main.h"

/**
 * _strlen - compute string length
 *
 * @s: pointer to string
 * Return: length of string
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s = s + 1;
	}
	return (length);
}

/**
 * print_rev - print strig in reverse mode
 *
 * @s: pointer to string
 */

void print_rev(char *s)
{
	int length;

	length = _strlen(s);
	if (length <= 0)
		return;
	while (length != -1)
	{
		_putchar(*(s + length));
		length--;
	}
	/*_putchar('\n');*/
}
