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
	return (NULL);
}
