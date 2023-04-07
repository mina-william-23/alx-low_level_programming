#include <stdio.h>
#include <stdlib.h>
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
 * printstring - print string s
 * @s: char pointer
*/
void printstring(char *s)
{
	while (*s)
		putchar(*s++);
	_putchar('\n');
}
/**
 * main - main function
 * @argc: number of input commandline arguments
 * @argv: array of pointers to characters
 * Return: always (0) success
*/
int main(int argc, char *argv[])
{
	int num, i, res = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printstring("Error");
		return (1);
	}
	num = atoi(argv[1]);
	if (num <= 0)
		printstring("0");

	for (i = 0; i < 5; i++)
	{
		res += num / coins[i];
		num %= coins[i];
	}
	printnum(res);
	putchar('\n');

	return (0);
}
