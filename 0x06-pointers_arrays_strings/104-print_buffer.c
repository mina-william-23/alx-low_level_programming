#include "main.h"
#include <stdio.h>
/**
 * print_buffer - print buffer with size
 * @b: pointer to buffer
 * @size: size of buffer
*/
void print_buffer(char *b, int size)
{
	int i, st, en;

	if (size <= 0)
	{
		printf("\n");
	}
	else
	{
		for (st = 0; st < size; st += 10)
		{
			en = (size - st < 10) ? size - st : 10;
			printf("%08x: ", st);
			for (i = 0; i < 10; i++)
			{
				if (i < en)
					printf("%02x", *(b + st + i));
				else
					printf("  ");

				if (i % 2)
					printf(" ");
			}

			for (i = 0; i < en; i++)
			{
				if (*(b + st + i) >= 32 && *(b + st + i) <= 127)
					printf("%c", *(b + st + i));
				else
					printf(".");
			}
			printf("\n");
		}
	}
}
