#include <stdio.h>
#include "main.h"
/**
 * printnum - print number num
 * @num: input number
*/
void printnum(int num)
{
	if (num / 10 != 0)
		printnum(num / 10);
	_putchar((num % 10) + '0');
}
/**
 * main - main function
 * @argc: number of input commandline arguments
 * @argv: array of pointers to characters
 * Return: always (0) success
*/
int main(int argc, char *argv[])
{
	printnum(argc - 1);
	_putchar('\n');
	return (0);
}
