#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
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
 * main - main
 * @argc: number of arguments
 * @argv: array of strings
 * Return: 0 success
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	argv[0] = argv[0];
	return (0);
}
