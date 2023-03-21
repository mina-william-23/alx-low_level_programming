#include "main.h"

/**
 * main - main function
 *
 * DESCRIPTION: prints "lowercase alphabet" using _putchar function
 * Return: (0) success
 */

int main(void)
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
