#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _atoi - convert string to number
 * @s: string pointer
 * Return: integer number from s string
*/
int _atoi(const char *s)
{
	int num = 0;

	while (*s)
	{
		if (!(*s >= '0' && *s <= '9'))
			return (-1);
		num = num * 10 + (*s - '0');
		s++;
	}
	return (num);
}
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
		_putchar(*s++);
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
	int sum = 0, i, num;

	for (i = 1; i < argc; i++)
	{
		num = _atoi(argv[i]);
		if (num == -1)
		{
			printstring("Error");
			return (1);
		}
		else
			sum += num;
	}
	printnum(sum);
	_putchar('\n');
	return (0);
}
