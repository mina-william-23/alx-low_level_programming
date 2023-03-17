#include <stdio.h>

/**
 * main - main function
 *
 * Description: print numbers base 10
 * from 0, 1, - 9
 * int this pattern
 * Return: (0) success
*/
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		if (num < 57)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
