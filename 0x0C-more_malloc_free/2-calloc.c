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
	unsigned long int members = nmemb * size;

	if (!members)
		return (0);

	p = malloc(members);
	if (!p)
		return (0);

	while (members--)
		p[nmemb] = 0;
	return (p);
}
