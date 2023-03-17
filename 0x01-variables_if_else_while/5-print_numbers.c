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
	int num = 0;

	while (num <= 9)
	{
		printf("%d");
		num++;
	}
	printf("\n");
	return (0);
}
