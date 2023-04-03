#include "main.h"
/**
 * _strspn - return number of char in substring from s that have only chars
 * from accept string
 * @s: string to search in for chars from accept
 * @accept: only allowed characters to include in substring from s
 * Return: numbers of characters from substring s that have only characters
 * in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	char *acc;
	unsigned int res = 0;
	int flag;

	if (!s || !accept)
		return (res);
	while (*s)
	{
		acc = accept;
		flag = 0;
		while (*acc)
		{
			if (*s == *acc)
			{
				flag = 1;
				res++;
				break;
			}
			acc++;
		}
		if (!flag)
			break;
		s++;
	}
	return (res);
}
