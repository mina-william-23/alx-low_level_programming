#include <stdio.h>
#include <main.h>

/**
 * main - main function
 *
 * DESCRIPTION: prints "_putchar" using _putchar function
 * Return: (0) success
 */

int main(void)
{
	char word[] = "_putchar\n";
	int cnt = 0;

	while (cnt < 9)
	{
		_putchar(word[cnt]);
		cnt++;
	}
	return (0);
}
