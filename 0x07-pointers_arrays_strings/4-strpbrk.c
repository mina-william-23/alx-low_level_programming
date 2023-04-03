#include "main.h"
/**
 * _strchr - search for first occurance of c in s string
 * @s: string to search in
 * @c: character searched for
 * Return: pointer to character c in s if found
 * if not return NULL
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
/**
 * _strpbrk - search for first occur in s string in string accept
 * @s: string to search for first occurance of character in it in accept
 * @accept: string accept to search for character in s if exist in accept
 * Return: pointer to first character in s exist in accept
*/
char *_strpbrk(char *s, char *accept)
{
	if (!(*s) || !(*accept))
		return (NULL);
	while (*s)
	{
		if (_strchr(accept, *s))
			return (s);
		s++;
	}
	return (NULL);
}
