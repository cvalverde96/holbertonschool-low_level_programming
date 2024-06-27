#include "main.h"

/**
 * _strchr - dsa
 * @s: pointer s
 * @c: characeter
 * Return: s
*/

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}

		if (*s == c)
		{
			return ('\0');
		}

	}

	return (0);
}
