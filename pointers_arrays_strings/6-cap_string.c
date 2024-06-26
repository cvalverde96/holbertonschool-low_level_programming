#include "main.h"

/**
 * cap_string - capitalizing
 * @str: pointer de string
 * Return: string
 */

char *cap_string(char *str)
{
	char *s = str;
	char mapping[256] = {0};
	char separators[] = " \t\n,;.!?\"(){}";
	int capitalize_next = 1;

	for (char c = 'a'; c <= 'z'; c++)
	{
		mapping[(unsigned char)c] = c - 'a' + 'A';
	}

	while (*s)
	{
		for (int i = 0; separators[i] != '\0'; i++)
		{
			if (*s == separators[i])
			{
				capitalize_next = 1;
				break;
			}
		}

		if (capitalize_next && mapping[(unsigned char)*s])
		{
			*s = mapping[(unsigned char)*s];
			capitalize_next = 0;
		}
		else if (!capitalize_next && mapping[(unsigned char)*s])
		{
			capitalize_next = 0;
		}
		else if (*s >= 'A' && *s <= 'Z')
		{
			capitalize_next = 0;
		}
		else if (*s >= '0' && *s <= '9')
		{
			capitalize_next = 0;
		}
		s++;
	}
	return (str);
}
