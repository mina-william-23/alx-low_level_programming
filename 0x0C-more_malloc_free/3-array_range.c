#include "main.h"
/**
 * array_range - create integer array of size max - min + 1
 * of values from min to max included
 * @min: start value
 * @max: end value
 * Return: integer pointer or null if (max < min) or malloc fail
*/
int *array_range(int min, int max)
{
	int members, i, j;
	int *p;

	if (min > max)
		return (0);

	members = max - min + 1;

	p = malloc(sizeof(*p) * members);
	if (!p)
		return (0);

	for (i = min, j = 0; i <= max; i++, j++)
		p[j] = i;

	return (p);
}
