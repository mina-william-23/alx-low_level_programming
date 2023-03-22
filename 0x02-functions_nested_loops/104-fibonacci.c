#include <stdio.h>

/**
 * main - main function
 *
 * Description: print first 98 fibonnaci
 * Return: (0) success
 */

int main(void)
{
	unsigned long int t = 1, j = 1, t1 = 0, t2 = 1, j1 = 0, j2 = 1, i;

	for (i = 0; i < 90; i++)
	{
		printf("%lu, ", t);
		t = t + j;
		j = t - j;
	}

	t1 = t / 1000000000;
	j1 = j / 1000000000;
	t2 = t % 1000000000;
	j2 = j % 1000000000;

	for (i = 90; i < 98; i++)
	{
		printf("%lu%lu", (t1 + (t2 / 1000000000)), (t2 % 1000000000));
		if (i != 97)
			printf(", ");
		t1 = t1 + j1;
		j1 = t1 - j1;
		t2 = t2 + j2;
		j2 = t2 - j2;
	}
	printf("\n");
	return (0);
}
