#include "main.h"
/**
 * _memset - reset s string of size n to char b
 * @s: string pointer
 * @b: default character
 * @n: size of string s
 * Return: pointer to s string after modification
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
