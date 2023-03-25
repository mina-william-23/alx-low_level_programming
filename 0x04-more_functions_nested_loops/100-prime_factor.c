#include <stdio.h>

/**
* _sqroot - find the square root
* @n: input
* Return: square root of n
*/

double _sqroot(double n)
{
	double i = 0;
	double j = n / 2;

	while (j != i)
	{
		i = j;
		j = (n / i + i) / 2;
	}
	return (j);
}

/**
* largest_prime_factor - find largest_prime_factor
* @n: input
*/

void largest_prime_factor(long int n)
{
	int largest_prime, prime_num;

	while (n % 2 == 0)
	{
		n = n / 2;
	}
	for (prime_num = 3; prime_num <= _sqroot(n); prime_num = prime_num + 2)
	{
		while (n % prime_num == 0)
		{
			largest_prime = prime_num;
			n = n / prime_num;
		}
	}
	if (n > 2)
		largest_prime = n;

	printf("%d\n", largest_prime);
}

/**
* main - main
*
* Return: (0) success
*/

int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}


