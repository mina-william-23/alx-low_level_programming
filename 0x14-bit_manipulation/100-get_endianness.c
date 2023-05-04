#include "main.h"
/**
 * get_endianness - determine machine endian type
 * @void: no arguments
 * Return: 0 if little 1 if big
*/
int get_endianness(void)
{
	unsigned int a = 1;
	/* *p will be first byte of int */
	/* if it big endian it will have 00000000 */
	/* if it little endian it will have 00000001 */
	char *p = (char *) &a;

	return (*p ? 0 : 1);
}
