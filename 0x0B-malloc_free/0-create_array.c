#include "main.h"
/**
 * create_array - create string of length size
 * @size: length of string
 * @c: default value in string
 * Return: return pointer to string
*/
char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	s = malloc(size + 1);
	if (!s || size == 0)
		return (0);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[size] = '\0';
	return (s);
}
