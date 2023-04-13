#include <stdio.h>
#include <stdlib.h>
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
		if (*s < '0' && *s > '9')
			return (0);
		len++;
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
	int len1, len2;

	len1 = argc == 3 ? _computeSize(&argv[1]) : 0;
	len2 = argc == 3 ? _computeSize(&argv[2]) : 0;
	if (argc != 3 || len1 == 0 || len2 == 0)
	{
		printf("Error\n");
		exit(98);
	}
	printf('0');
	return (0);
}
