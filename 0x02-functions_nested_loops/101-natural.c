#include <stdio.h>

/**
 * main - main function
 *
 * Description: print sum of multiple of 3,5
 * Return: (0) success
 */

int main(void)
{
	int sum = 0, num = 0;

	while (num < 1024)
	{
		if (num % 3 == 0 || num % 5 == 0)
			sum += num;
		num++;
	}
	printf("%d\n", sum);
	return (0);
}
