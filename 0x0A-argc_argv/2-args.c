#include <stdio.h>
#include "main.h"
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
	int i;

	for (i = 0; i < argc; i++)
		printstring(argv[i]);
	return (0);
}
