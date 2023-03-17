#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - main function
 *
 * Description: test the last digit of the random number n if it is
 * greter than 5, less than 6, or equal zero
 * Return: (0) success
*/
int main(void)
{
	int n, lastdig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdig = n % 10;
	printf("Last digit of %d is %d and is ", n, lastdig);
	if (lastdig == 0)
		printf("0\n");
	else if (lastdig > 5)
		printf("greater than 5\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
