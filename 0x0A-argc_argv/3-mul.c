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
	unsigned int num = 0;
	int sign = 1;

	if (!*s)
		return (0);

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	while (*s)
	{
		num = num * 10 + (*s - '0');
		s++;
	}
	return (sign * num);
}
/**
 * printnum - print number num
 * @num: input number
*/
void printnum(int num)
{
	unsigned int n = num;

	if (num < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n / 10 != 0)
		printnum(n / 10);
	_putchar((n % 10) + '0');
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
	int num1, num2;

	if (argc != 3)
	{
		printstring("Error");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	printnum(num1 * num2);
	_putchar('\n');
	return (0);

