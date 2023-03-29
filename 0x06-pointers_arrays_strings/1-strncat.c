#include "main.h"

/**
 * _strncat - merge two strings
 *
 * @dest: final string
 * @src: to merge string
 * @n: number of chars to merge
 * Return: dest final string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *d;
	int cnt;

	d = dest;
	cnt = 0;
	while (*d != '\0')
		d++;
	while (*src != '\0' && cnt < n)
	{
		*d = *src;
		d++;
		src++;
		cnt++;
	}
	*d =  '\0';
	return (dest);
}
