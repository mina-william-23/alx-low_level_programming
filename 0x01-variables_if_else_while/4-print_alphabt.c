#include <stdio.h>
/**
 * main - main function
 *
 * Description: print lowercase alphabet a-z
 * except for letters e, q
 * using putchar function
 * Return: (0) success
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'e' || letter == 'q')
			continue;
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
