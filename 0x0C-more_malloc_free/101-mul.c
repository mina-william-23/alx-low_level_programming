#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _puts - prints string
 * @str: string pointer
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
/**
 * computeSize - check string s if all digits or contain other chars
 * @s: string pointer
 * Return: length of s if all digits or (0) if not
*/
int computeSize(char *s)
{
	int len = 0;
	char *src = s;

	while (s && *s)
	{
		if (*s < '0' && *s > '9')
			return (0);
		len++;
		s++;
	}
	if (len == 1 && src[0] == '0')
		return (0);
	return (len);
}
/**
 * _mul - multiply
 * @res: result
 * @s1: number1
 * @s2: number2
 * @l1: s1 length
 * @l2: s2 length
 * Return: result pointer
*/
unsigned char *_mul(unsigned char *res, char *s1, char *s2, int l1, int l2)
{
	int i, j, k, num;

	for (i = l1 - 1; i >= 0; i--)
	{
		k = 0;
		num = 0;
		for (j = l2 - 1; j >= 0; j--)
		{
			num += (s1[i] - '0') * (s2[j] - '0');
			num += res[i + j + 1] - '0';
			res[i + j + 1] = (num % 10) + '0';
			num /= 10;
			k = i + j;
		}
		/* all carry is put in place before start new multiplication */
		while (num && k >= 0)
		{
			res[k] = ((res[k] - '0') + (num % 10)) + '0';
			k--;
			num /= 10;
		}
	}
	return (res);
}
/**
 * main - main entry
 * @argc: number of arguments
 * @argv: array of strings
 * Return: (0)  success
*/
int main(int argc, char *argv[])
{
	int len1, len2, total, i;
	unsigned char *res;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	len1 = computeSize(argv[1]);
	len2 = computeSize(argv[2]);

	if (len1 == 0 || len2 == 0)
	{
		_puts("Error");
		exit(98);
	}
	/* maximum length of result of multiply */
	total = len1 + len2;

	res = malloc(total);
	if (!res)
		return (0);
	/* initialize it with zero */
	for (i = 0; i < total; i++)
		res[i] = '0';
	/* multiply two argv1, argv2 */
	res = _mul(res, argv[1], argv[2], len1, len2);
	/* skip leading zeros */
	for (i = 0; i < total && res[i] == '0' ; i++)
	;

	for (; i < total; i++)
		_putchar(res[i]);
	_putchar('\n');
	free(res);

	return (0);
}
