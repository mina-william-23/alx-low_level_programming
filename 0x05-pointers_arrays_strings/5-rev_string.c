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
 * rev_string - reverse string
 *
 * @s: pointer to string
 */

void rev_string(char *s)
{
	int length, i;
	char c;

	length = _strlen(s);
	if (length <= 0)
		return;
	
	for (i = 0; i < length / 2; i++)
	{
		c = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = c;
	}
}
