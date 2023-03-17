#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - main function
 *
 * Description: test the the random number n if it is
 * positive, negative, or equal zero
 * Return: (0) success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n");
	else if (n > 0)
		printf("%d is positive\n");
	else
		printf("%d is negative\n");
	return (0);
}
