#include <stdio.h>

/**
 * main - main function
 *
 * Description: prints all possible combinations of two two-digit numbers.
 * The numbers should range from 0 to 99
 * The two numbers should be separated by a spaces
 * All numbers should be printed with two digits. 1 should be printed as 01
 * The combination of numbers must be separated by comma, followed by a space
 * The combinations of numbers should be printed in ascending order
 * 00 01 and 01 00 are considered as the same combination of the numbers 0,1
 * Return: (0) success
*/
int main(void)
{
	int num1 = 48, num2 = 48, num3 = 48, num4;

	while (num1 <= 57)
	{
		while (num2 <= 57)
		{
			num3 = num1;
			num4 = num2 + 1;
			while (num3 <= 57)
			{
				while (num4 <= 57)
				{
					putchar(num1);
					putchar(num2);
					putchar(' ');
					putchar(num3);
					putchar(num4);
					if (!(num1 == 57 && num2 == 56))
					{
						putchar(',');
						putchar(' ');
					}
					num4++;
				}
				num3++;
				num4 = 48;
			}
			num2++;
		}
		num1++;
		num2 = 48;
	}
	putchar('\n');
	return (0);
}
