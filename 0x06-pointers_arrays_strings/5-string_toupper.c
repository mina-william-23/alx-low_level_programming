#include "main.h"

/**
 * string_toupper - change letters to uppercase
 *
 * @str: pointed to string
 * Return: pointer to string
 */

char *string_toupper(char *str)
{
	char *s;

	s = str;
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s = *s - 'a' + 'A';
		s++;
	}
	return (str);
}
