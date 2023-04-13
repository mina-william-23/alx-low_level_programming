#include "main.h"
/**
 * malloc_checked - check if malloc succeed to allocate b
 * @b: size
 * Return: void pointer or exit if failed malloc
*/
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	return (p ? p : exit(98));
}
