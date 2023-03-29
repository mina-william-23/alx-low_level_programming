#include "main.h"

/**
 * cap_string - capital every word
 * @str: pointed to string
 * Return: pointer to string
*/
char *cap_string(char *str)
{
	char before, *current;

	before = '\0';
	current = str;
	while (*current)
	{
		switch (before)
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '?':
			case '!':
			case '\"':
			case '(':
			case ')':
			case '{':
			case '}':
					if (*current >= 'a' && *current <= 'z')
						*current  = *current - 'a' + 'A';
		}
		before = *current;
		current++;
	}
	return (str);
}
