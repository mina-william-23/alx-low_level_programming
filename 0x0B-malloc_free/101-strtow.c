#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * numberOfWords - compute number of words(separated by space) in string
 * @str: string pointer
 * Return: number of words
*/
int numberOfWords(char *str)
{
	int res = 0;
	int spaceBefore = 1;

	while (str && *str)
	{
		if (*str == ' ')
			spaceBefore = 1;
		else if (spaceBefore)
		{
			res++;
			spaceBefore = 0;
		}
		str++;
	}
	return (res);
}
/**
 * strtow - create array of strings from one string (seperate by space)
 * @str: string pointer
 * Return: array of words from str string
*/
char **strtow(char *str)
{
	int words = numberOfWords(str), i, j, k;
	char **s;
	char *tmp;

	/* if number of words is zero or malloc fail return null*/
	if (!words)
		return (0);
	s = malloc((words + 1) * sizeof(char *));
	if (!s)
		return (0);

	for (i = 0; i < words; i++)
	{
		while (str && *str == ' ')
			str++;
		j = 0;
		/* tmp start of word pointer */
		tmp = str;
		while (str && *str != ' ')
		{
			j++;
			str++;
		}
		/* j+1 length of word including \0 */
		s[i] = malloc(j + 1);
		/* handle malloc failure */
		if (!s[i])
		{
			while (i--)
				free(s[i]);
			free(s);
			return (0);
		}
		for (k = 0; k < j; k++)
			s[i][k] = *(tmp + k);
		s[i][k] = '\0';
	}
	/* last element of array is null as requested in task */
	s[words] = 0;
	return (s);
}
