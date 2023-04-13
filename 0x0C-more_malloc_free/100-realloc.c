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
	unsigned int cnt;

	if (old_size == 0)
	{
		if (new_size)
		{
			if (!ptr)
				free(ptr);
			p = malloc(new_size);
		}
		else
			p = 0;
	}
	else if (new_size == 0)
	{
		if (!ptr)
			free(ptr);
		p = 0;
	}
	else if (old_size == new_size)
	{
		p = ptr;
	}
	else
	{
		p = malloc(new_size);
		old = ptr;
		cnt = old_size < new_size ? old_size : new_size;

		while (cnt--)
			p[cnt] = old[cnt];
	}

	return (p);
}
