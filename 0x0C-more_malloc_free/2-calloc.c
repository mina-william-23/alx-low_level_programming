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
	void *p = malloc(len);
	unsigned char *cc;

	if (nmemb == 0 || size == 0 || !p)
		return (0);
	/* cast void pointer to unsigned char as memset do to write in it */
	cc = p;
	for (i = 0; i < len; i++)
		*(cc + i) = '\0';
	return (p);
}
