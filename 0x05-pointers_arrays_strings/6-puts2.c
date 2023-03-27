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
 * puts2 - print character and skip next one in the string
 *
 * @str: pointer to string
 */

void puts2(char *str)
{
	int length, i;

	length = _strlen(str);
	i = 0;
	while (i < length)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
