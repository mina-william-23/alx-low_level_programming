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
	while (*s != '\n')
	{
		length++;
		s = s + 1;
	}
	return (length);
}
