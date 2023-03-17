#include <stdio.h>
/**
 * main - main function
 *
 * Description: print lowercase alphabet a-z
 * then print uppercase alphabet A-Z
 * using putchar function
 * Return: (0) success
*/
int main(void)
{
	char letter = 'a';
	
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	letter = 'A';
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
