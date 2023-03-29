#include "main.h"
/**
 * _strncpy - copy n characters from src to dest
 *
 * @dest: destination string pionter
 * @src: source string pointer
 * @n: number of characters to copy
 * Return: dest string pointer
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *p;
	int count;

	p = dest;
	count = 0;

	while (count < n)
	{
		*dest = *src;

		if (*src)
			src++;

		dest++;
		count++;
	}
	return (p);
}
