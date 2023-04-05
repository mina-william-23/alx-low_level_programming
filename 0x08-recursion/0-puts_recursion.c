#include "main.h"
/**
 * _puts_recursion - print string s using recursion like puts function
 * @s: string pointer
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	_putchar('\n');
}
