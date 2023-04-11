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
	unsigned int length = 0;

	while (*s)
	{
		length++;
		s++;
	}
	return (length);
}
/**
 * str_concat - copy str into string made by malloc
 * @s1: string 1 pointer
 * @s2: string 2 pointer
 * Return: pointer to string s1 + s2
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, total, i;
	char *s;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	total = len1 + len2;
	s = malloc(total + 1);

	if (!s)
		return (0);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (i = 0; i < len2; i++)
		s[len1 + i] = s2[i];
	s[total] = '\0';

	return (s);
}
