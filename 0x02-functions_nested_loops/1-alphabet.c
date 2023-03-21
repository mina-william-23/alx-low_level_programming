#include "main.h"

/**
 * print_alphabet - print alphabet function
 *
 * DESCRIPTION: prints "lowercase alphabet" usinh print_alphabet function
 * Return: (0) success
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
	return (0);
}
