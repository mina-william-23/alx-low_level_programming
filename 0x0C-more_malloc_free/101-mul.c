#include <stdio.h>
#include <stdlib.h>
/**
 * _putchar - print char
 * @c: character variable to print
 * Return: (0) success
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _print - print string without '\0'
 * @s: string pointer
*/
void _print(char *s)
{
	while (s && *s)
	{
		_putchar(*s);
		s++;
	}
}
/**
 * _computeSize - check string s if all digits or contain other chars
 * @s: string pointer
 * Return: length of s if all digits or (0) if not
*/
int _computeSize(char *s)
{
	int len = 0;

	while (s && *s)
	{
		if (*s >= '0' && *s <= '9')
			len++;
		else
			return (0);
	}
	return (len);
}
/**
 * main - main entry
 * @argc: number of arguments
 * @argv: array of strings
 * Return: (0)  success
*/
int main(int argc, char *argv[])
{
	char r[] = "Error\n";
	int len1, len2;

	if (argc != 3)
	{
		_print(r);
		exit(98);
	}
	len1 = _computeSize(&argv[1]);
	len2 = _computeSize(&argv[2]);
	if (len1 == 0 || len2 == 0)
	{
		_print(r);
		exit(98);
	}
	_putchar('0');
	return (0);
}
