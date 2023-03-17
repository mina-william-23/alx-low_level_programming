#include <stdio.h>
/**
 * main - main function
 *
 * Description: print lowercase alphabet a-z
 * using putchar function
 * Return: (0) success
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		if (letter == 'z')
			putchar('\n');
		letter++;
	}
	return (0);
}
