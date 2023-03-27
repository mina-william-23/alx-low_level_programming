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

	length = _strlen(s) - 1;
	while (length != -1)
		_putchar(s[length--]);
	_putchar('\n');
}
