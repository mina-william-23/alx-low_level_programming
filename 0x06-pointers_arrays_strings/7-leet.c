#include "main.h"
/**
 * leet - encode to 1337
 *
 * @str: input string pointer
 * Return: encoded string pointer
*/
char *leet(char *str)
{
	char *s;
	int i;
	char *letters[] = { 'a', 'e', 'o', 't', 'l' };
	char *encode[] = { '4', '3', '0', '7', '1' };

	s = str;

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (letters[i] == *s || letters[i] == *s - 'A' + 'a')
				*s = encode[i];
		}
		s++;
	}

	return (str);
}
