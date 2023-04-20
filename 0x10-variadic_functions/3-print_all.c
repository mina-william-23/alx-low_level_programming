#include "variadic_functions.h"
/**
 * print_all - mimic printf style
 * @format: string contain characters represent arguments
 * ...: arguments (strings)
 * c - char i - integer f - float s - char *
 * (if the string is NULL, print (nil) instead
 * any other char should be ignored
*/
void print_all(const char * const format, ...)
{
	char *s, *sep;
	unsigned int j = 0;
	va_list args;

	if (format)
	{
		va_start(args, format);
		sep = "";
		while (format[j])
		{
			switch (format[j])
			{
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
				/* float gets promote to double that's how va_arg works */
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 'c':
				/* any short, char datatype small than int promoted to int */
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 's':
					s = va_arg(args, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
			}
			j++;
			sep = ", ";
		}
		va_end(args);
	}
	_putchar('\n');
}
