#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - compute string length
 *
 * @s: pointer to string
 * Return: length of string
 */
unsigned int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}
	return (length);
}
/**
 * _strdup - copy str into string made by malloc
 * @str: string pointer
 * Return: pointer to string copy of str
*/
char *_strdup(char *str)
{
	unsigned int len = _strlen(str), i;
	char *s;

	if (!len)
		return (0);
	s = malloc(len + 1);
	if (!s)
		return (0);
	for (i = 0; i < len; i++)
		s[i] = str[i];
	s[len] = '\0';
	return (s);
}
