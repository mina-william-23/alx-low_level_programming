#include "main.h"
/**
 * _strstr - return first occurance of needle in haystack
 * @haystack: strin to search in for needle
 * @needle: string to searched for
 * Return: pointer to start of string needle in haystack or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	char *res, *n, *hay;
	int flag = 1;

	while (*haystack)
	{
		n = needle;
		hay = haystack;
		res = haystack;
		flag = 0;
		while (*n && *hay)
		{
			if (*n != *hay)
			{
				flag = 1;
				break;
			}
			hay++;
			n++;
		}
		if (flag == 0)
			return (res);
		haystack++;
	}
	return (NULL);
}
