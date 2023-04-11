#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - compute string length
 *
 * @s: pointer to string
 * Return: length of string
 */
unsigned int _strlen(char *s)
{
	unsigned int length = 0;

	while (*s)
	{
		length++;
		s++;
	}
	return (length);
}
/**
 * argstostr - concat array of strings
 *
 * @ac: length of array of strings
 * @av: pointer to array of strings
 * Return: concatenated string of all av strings
 */
char *argstostr(int ac, char **av)
{
	unsigned int totalLen = 0, t = 0, i, j;
	char *s;

	if (ac == 0  || !av)
		return (0);

	for (i = 0; i < ac; i++)
		totalLen += _strlen(av[i]) + 1;

	s = malloc(totalLen + 1);
	if (!s)
		return (0);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
			s[t++] = av[i][j++];

		s[t++] = '\n';
	}
	s[t] = '\0';
}
