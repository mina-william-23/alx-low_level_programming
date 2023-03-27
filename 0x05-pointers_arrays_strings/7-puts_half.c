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
 * puts_half - print second half of string
 *
 * @s: pointer to string
 */

void puts_half(char *s)
{
	int length, half_length;

	length = _strlen(s);
	half_length = length / 2;
	if (length % 2 == 1)
		half_length++;
	while (half_length < length)
		_putchar(s[half_length++]);
	_putchar('\n');
}
