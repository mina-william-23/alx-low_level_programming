#include <stdio.h>
/**
 * main - main function
 *
 * Description: print lowercase alphabet z-a
 * using putchar function
 * Return: (0) success
*/
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		if (letter == 'a')
			putchar('\n');
		letter--;
	}
	return (0);
}
