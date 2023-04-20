#include "variadic_functions.h"
/**
 * print_strings - print n strings with separator if exists
 * @separator: separator between numbers
 * @n: number of arguments (strings)
 * ...: arguments (strings)
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s)
			printf("%s", s);
		else
			printf("%s", "(nil)");
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	va_end(args);
	_putchar('\n');
}
