#include "main.h"

/**
 * rot13 - encode by rot13 technique
 * @str: string input pointer
 * Return: encoded string pointer
*/
char *rot13(char *str)
{
	char *s = str;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char decode[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"
	int i;

	while (*s)
	{
		for (i = 0; i < 52; i++)
		{
			if (alphabet[i] == *s)
			{
				*s = decode[i];
				break;
			}
		}
		s++;
	}

	return (str);
}
