#include "main.h"
/**
 * binary_to_uint - convert binary string to decimal
 * @b: string of 0 or 1 if valid or has another chars
 * Return: number if valid string or 0 if not
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;

	while (b && *b)
	{
		if (*b != '0' && *b != '1')
		{
			uint = 0;
			break;
		}
		uint = (uint << 1) | (*b - '0');
		b++;
	}
	return (uint);
}
