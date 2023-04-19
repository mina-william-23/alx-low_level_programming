#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - receive 2 numbers and operator and calculate them
 * @argc: number of arguments in argv
 * @argv: arguments operator,  2 numbers
 * Return: Success (0), Error (98, 99, 100)
 */
int main(int argc, char *argv[])
{
	int number1, number2, res;
	int (*op_fun_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	number1 = atoi(argv[1]);
	number2 = atoi(argv[3]);
	op_fun_ptr = get_op_func(argv[2]);

	if (!op_fun_ptr)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && number2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = op_fun_ptr(number1, number2);
	printf("%d\n", res);
	return (0);
}
