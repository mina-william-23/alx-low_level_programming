#include <stdio.h>

/**
 * main - main function
 *
 * Description: Print only the smallest combination of two digits
 * Print only the smallest combination of two digits
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Return: (0) success
*/
int main(void)
{
	int num = 48, num2;

	while (num <= 56)
	{
		num2 = num + 1;
		while (num2 <= 57)
		{
			putchar(num);
			putchar(num2);

			if (num != 56 && num2 != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
