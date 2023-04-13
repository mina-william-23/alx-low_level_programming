#include "main.h"
/**
 * _calloc - create calloc using malloc
 * @nmemb: number of elements
 * @size: size of every element
 * Return: void pointer to allocated memory or null if failed
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb <= 0 || size <= 0)
		return (0);
	p = malloc(nmemb * size);
	if (!p)
		return (0);

	nmemb *= size;
	while (nmemb--)
		p[nmemb] = 0;
	return (p);
}
