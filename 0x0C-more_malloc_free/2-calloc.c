#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - create calloc using malloc
 * @nmemb: number of elements
 * @size: size of every element
 * Return: void pointer to allocated memory or null if failed
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *p = malloc(sizeof(char) * nmemb * size);

	if (nmemb == 0 || size == 0 || p == 0)
		return (0);

	for (i = 0; i < sizeof(char) * nmemb * size; i++)
		*(p + i) = 0;
	return (p);
}
