#include "main.h"
/**
 * _memcpy - copy memory of src into dest of size n
 * @dest: destination string
 * @src: source string
 * @n: size of source and dest
 * Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
