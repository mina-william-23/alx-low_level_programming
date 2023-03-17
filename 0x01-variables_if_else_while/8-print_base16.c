#include <stdio.h>

/**
 * main - main function
 *
 * Description: print numbers base 16
 * from 0 - 9 - f
 * Return: (0) success
*/
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	num = 'a';
	while (num <= 'f')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
