#include <stdio.h>

/**
 * main - main function
 *
 * Description: print numbers base 10
 * from 0 - 9
 * Return: (0) success
*/
int main(void)
{
	int num =  48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
