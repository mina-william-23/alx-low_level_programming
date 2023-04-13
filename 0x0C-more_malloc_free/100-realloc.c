#include "main.h"
/**
 * _realloc - another implement of realloc
 * @ptr: old pointer
 * @old_size: size of old pointer
 * @new_size: size of new pointer
 * Return: pointer ot new size
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *old;

	if (old_size == new_size)
		return (ptr);

	if (ptr == 0)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (0);
	}

	p = malloc(new_size);
	if (p == 0)
		return (0);

	if (old_size > new_size)
		old_size = new_size;

	while (old_size--)
		p[old_size] = ptr[old_size];

	free(ptr);
	return (p);
}
