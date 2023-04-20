#include <stdio.h>
#include <stdlib.h>
/**
 * main - print opcodes of main
 * @argc: number of args
 * @argv: args containing number of bytes
 * Return: success (0), error (1)
 */
int main(int argc, char *argv[])
{
	char *p;
	int i, j;

	if (argc != 2)
	{
		puts("Error");
		exit(1);
	}

	i = atoi(argv[1]);
	if (i < 0)
	{
		puts("Error");
		exit(2);
	}
	p = (char *)main;
	for (j = 0; j < i; j++)
	{
		printf("%02hhx", *p);
		if (j != i - 1)
			putchar(' ');
		p++;
	}
	putchar('\n');
	return (0);
}
