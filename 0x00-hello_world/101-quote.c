#include <stdio.h>

/**
 * main - entry point of the programe
 *
 * Description: print string to starndard error using fwrite function
 * Return: (1)
 */
int main(void)
{
	char phrase[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fwrite(phrase, sizeof(phrase), sizeof(char), stderr);
	return (1);
}
