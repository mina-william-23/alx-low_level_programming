#include "variadic_functions.h"
/**
 * print_numbers - print n numbers with separator if exists
 * @separator: separator between numbers
 * @n: number of arguments (numbers)
 * ...: arguments (numbers)
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	va_end(args);
	_putchar('\n');
}
