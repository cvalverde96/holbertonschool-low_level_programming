#include "main.h"


/**
 * _strpbrk - funcion que searches for a string
 * @s: pointer
 * @accept: pointer
 * Return: string
 */


char *_strpbrk(char *s, char *accept)
{
	while(*s)
		if(_strchr(accept, *s++))
			return (char*)--s;
	return (0);
}

char *_strchr(char *s, char c)
{
	while (*s != (char)c)
		if (!*s++)
			return 0;
	return (char *)s;
}
