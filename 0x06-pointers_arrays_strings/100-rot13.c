#include "main.h"

/**
 * rot13 - encode by rot13 technique
 * @str: string input pointer
 * Return: encoded string pointer
*/
char *rot13(char *str)
{
	char *s = str;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s = (*s - 'a' + 13) % 26 + 'a';
		else if (*s >= 'A' && *s <= 'Z')
			*s = (*s - 'A' + 13) % 26 + 'A';
		s++;
	}

	return (str);
}
