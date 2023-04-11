#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create string of length size
 * @size: length of string
 * @c: default value in string
 * Return: return pointer to string
*/
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size);
	if (!s || size == 0)
		return (0);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
