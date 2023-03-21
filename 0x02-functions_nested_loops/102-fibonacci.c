#include <stdio.h>

/**
 * main - main function
 *
 * Description: print first 50 fibonnaci
 * Return: (0) success
 */

int main(void)
{
	unsigned long long n1 = 1, n2 = 2, fib = n1 + n2, cnt = 3;

	printf("%lu, ", n1);
	printf("%lu, ", n2);

	while (cnt <= 50)
	{
		printf("%lu", fib);
		n1 = n2;
		n2 = fib;
		fib = n1 + n2;
		if (cnt < 50)
			printf(", ");
		cnt++;
	}
	return (0);
}
