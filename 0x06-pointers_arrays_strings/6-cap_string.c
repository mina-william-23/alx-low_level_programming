#include "main.h"

/**
 * cap_string - capital every word
 * @str: pointed to string
 * Return: pointer to string
*/
char *cap_string(char *str)
{
	char *current = str;
	char sep[] = " \t\n,.;?!\"(){}";
	int i, flag = 1;

	while (*current)
	{
		for (i = 0; i < 13; i++)
		{
			if (sep[i] == *current)
			{
				flag = 1;
				break;
			}
		}
		if (*current >= 'a' && *current <= 'z' && flag)
		{
			*current -= 32;
			flag = 0;
		}
		current++;
	}
	return (str);
}
