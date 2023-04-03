#include "main.h"
/**
 * set_string - change the address of *s into to
 * @s: pointer to pointer of char
 * @to: pointer to char
*/
void set_string(char **s, char *to)
{
	*s = to;
}
