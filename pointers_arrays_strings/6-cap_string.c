#include "main.h"

/**
 * cap_string - capitalize
 * @str: pointer
 * Return: string
 */

char *cap_string(char *str)
{
	char *pointer = str;
	int cap = 0;
	char sep[] = " \t\n,;.!?\"(){}";

	while (*pointer)
	{
		if (cap && *pointer >= 'a' && *pointer <= 'z')
		{
			*pointer -= ('a' - 'A');
			cap = 0;
		}

		for (int i = 0; sep[i] != '\0'; i++)
		{
			if (*pointer == sep[i])
			{
				cap = 0;
				break;
			}
		}
		pointer++;
	}
	return (str);
}
