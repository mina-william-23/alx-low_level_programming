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
	int num = 48, num2, num3;

	while (num <= 55)
	{
		num2 = num + 1;
		while (num2 <= 56)
		{
			num3 = num2 + 1;
			while (num3 <= 57)
			{
				putchar(num);
				putchar(num2);
				putchar(num3);

				if (!(num == 55 && num2 == 56 && num3 == 57))
				{
					putchar(',');
					putchar(' ');
				}
				num3++;
			}

			num2++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}
