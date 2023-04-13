#include "main.h"
/**
 * _calloc - create calloc using malloc
 * @nmemb: number of elements
 * @size: size of every element
 * Return: void pointer to allocated memory or null if failed
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned long int i = 0, len = nmemb * size;
	unsigned char *p = malloc(len);

	if (nmemb == 0 || size == 0 || !p)
		return (0);
	for (i = 0; i < len; i++)
		*(p + i) = '\0';
	return (p);
}
