#include "main.h"

/**
 * cap_string - capital every word
 * @str: pointed to string
 * Return: pointer to string
*/
char *cap_string(char *str)
{
	char *current = str;
	char before = ' ';
	char sep[] = " \t\n,.;?!\"(){}";
	int i, flag = 1;

	while (*current)
	{
		flag = 0;
		for (i = 0; i < 13; i++)
		{
			if (sep[i] == before)
			{
				flag = 1;
				break;
			}
		}
		if (*current >= 'a' && *current <= 'z' && flag)
			*current -= 32;
		before = *current;
		current++;
	}
	return (str);
}
