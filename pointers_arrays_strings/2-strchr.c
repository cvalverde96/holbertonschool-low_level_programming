#include "main.h"

/**
 * _strchr - dsa
 * @s: pointer s
 * @c: characeter
 * Return: s
*/

char *_strchr(char *s, char c)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return &s[i];
		}
	}

	return (s);
}
