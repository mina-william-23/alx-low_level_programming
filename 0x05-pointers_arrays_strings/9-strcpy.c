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
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;
	return (dest);
}
