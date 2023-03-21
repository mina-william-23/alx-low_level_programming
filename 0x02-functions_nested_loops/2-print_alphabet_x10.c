#include "main.h"

/**
 * print_alphabet_x10 - print alphabet function 10 times
 *
 * DESCRIPTION: prints "lowercase alphabet" 10 times
 * using print_alphabet function
 * Return: (0) success
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int cnt = 1;

	while (cnt <= 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		cnt++;
	}
}
