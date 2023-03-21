#include "main.h"
#include "stdio.h"

/**
 * print_to_98 - print numbers to 98
 * @n: the other number used to reach to 98
 *
 * Return: (0) success
 */

void print_to_98(int n)
{
	int increment = 1, start = n;

	if (n > 98)
		increment  = -1;
	if (start = 98)
	{
		printf("%d\n", start);
	}
	else
	{
		while (start != 98)
		{
			printf("%d, ", start);
			start += increment;
		}
		printf("%d", 98);
	}
}
