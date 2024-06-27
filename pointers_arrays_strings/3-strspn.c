#include "main.h"

/**
 * _strspn - get length of prefix substring
 * @s: pointer
 * @accept: p
 * Return: s
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	if (s[i] != accept[i])
	{
		return (i);
	}

	else
	{
		i++;
	}

	return (i);
}
