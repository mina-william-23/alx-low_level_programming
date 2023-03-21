#include <stdio.h>
/**
 * main - main function
 *
 * Description: print sum of even fibbonacci under 4000000
 * Return: (0) success
 */

int main(void)
{
	int n1 = 1, n2 = 2, fib = n1 + n2, sum = 0;

	while (fib < 4000000)
	{
		if (fib % 2 == 0)
			sum += fib;
		n1 = n2;
		n2 = fib;
		fib = n1 + n2;
	}
	printf("%d\n", sum);
	return (0);
}
