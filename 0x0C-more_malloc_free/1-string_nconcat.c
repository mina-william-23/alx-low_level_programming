#include "main.h"
/**
 * _strlen - compute string length
 *
 * @s: pointer to string
 * Return: length of string
*/
unsigned int _strlen(char *s)
{
	unsigned int length = 0;

	while (s && *s)
	{
		length++;
		s++;
	}
	return (length);
}
/**
 * string_nconcat - concate string s1 to n bytes of s2
 *
 * @s1: string 1 pointer
 * @s2: string 2 pointer
 * @n: number of bytes to include from s2
 * if n > s2 length so include all s2 else include only n
 * Return: pointer to string s1 + s2 null terminated
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, total, i;
	char *s;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len2 = (n > len2) ? len2 : n;
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
