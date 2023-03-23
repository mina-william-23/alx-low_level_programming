#include "main.h"

/**
 * _isupper - checks characters is uppercase
 * @c: character tested
 * Return: (1) if @c is upper - (0) if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
