#include "main.h"

/**
 * _strcpy - copy string src into dest string
 *
 * @dest: destination string
 * @src: source string
 * Return: copied string destination
 */

char *_strcpy(char *dest, char *src)
{
	int cnt;

	cnt = 0;
	while (*(src + cnt) != '\0')
	{
		*(dest + cnt) = *(src + cnt);
		cnt++;
		if (*(src + cnt) == '\0')
			*(dest + cnt) = '\0';
	}
	return (dest);
}
