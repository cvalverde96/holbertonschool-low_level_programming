#include "main.h"

/**
 * cap_string - capitalize
 * @str: pointer
 * Return: string
 */

char *cap_string(char *str)
{
	char *i = str;
	int c = 1;
	char s[] = " \t\n,;.!?\"(){}";

	while (*i != '\0')
	{
		if (c && *i >= 'a' && *i <= 'z')
		{
			*i -= ('a' - 'A');
			c = 0;
		}
		for (int in = 0; s[in] != '\0'; in++)
		{
			if (*i == s[in])
			{
				c = 1;
				break;
			}
		}
		i++;
	}
	return (str);
}
