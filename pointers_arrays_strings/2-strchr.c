#include "main.h"

/**
 * _strchr - dsa
 * @s: pointer s
 * @c: characeter
 * Return: s
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
		if (c == '\0')
		{
			return (s);
		}

	return ('\0');
}
