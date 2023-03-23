#include "main.h"

/**
 * _isdigit - checks character is digit[0-9]
 * @c: character tested
 * Return: (1) if @c is digit - (0) if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
