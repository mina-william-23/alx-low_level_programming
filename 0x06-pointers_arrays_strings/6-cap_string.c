#include "main.h"

/**
 * cap_string - capital every word
 * @str: pointed to string
 * Return: pointer to string
*/
char *cap_string(char *str)
{
	char *current;
	char sep[] = " \t\n,;.?!\"(){}";
	int i, flag = 1;

	current = str;
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
			*current = *current - 'a' + 'A';
			flag = 0;
		}
		current++;
	}
	return (str);
}
