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

	if (!ptr)
	{
		if (new_size)
			p = malloc(new_size);
		else
			p = 0;
	}
	else if (new_size == 0)
	{
		free(ptr);
		p = 0;
	}
	else if (new_size == old_size)
		p = ptr;
	else
	{
		p = malloc(new_size);
		if (!p)
			return (0);

		old = ptr;
		cnt = old_size;
		if (old_size > new_size)
			cnt = new_size;

		while (cnt--)
			p[cnt] = old[cnt];
		free(old);
	}
	return (p);
}
