#include "function_pointers.h"
/**
 * print_name - print string name using f function pointer
 * @name: string pointer
 * @f: function pointer that will print name
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
