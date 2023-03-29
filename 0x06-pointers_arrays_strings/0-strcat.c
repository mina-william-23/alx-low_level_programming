#include "main.h"

/**
 * _strcat - merge two strings
 *
 * @dest: final string
 * @src: to merge string
 * Return: dest final string
 */

char *_strcat(char *dest, char *src)
{
	char *d;

	d = dest;
	while (*d != '\0')
		d++;
	while (*src != '\0')
	{
		*d = *src;
		d++;
		src++;
	}
	*d = *src;
	return (dest);
}
