#include "main.h"

/**
 * _memcmp - funcion
 * @s1: pointer
 * @s2: pointer
 * @n: integer
 * Return: 0
 */

int _memcmp(const void *s1, const void *s2, int n);

/**
 * _strstr - function
 * @haystack: pointer
 * @needle: p
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	int n = _strlen(needle);

	while (*haystack)
		if (!_memcmp(haystack++, needle, n))
			return (haystack - 1);
	return (0);
}

/**
 * _strlen - coge una variable y la imprime una por una
 * @s: pointer de string
 * Return: 0 es exito
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _memcmp - funcion
 * @s1: pointer
 * @s2: pointer
 * @n: variable
 * Return: return 0
 */

int _memcmp(const void *s1, const void *s2, int n)
{
	const unsigned char *p1 = s1, *p2 = s2;

	while (n--)
		if (*p1 != *p2)
		{
			return (*p1 - *p2);
		}
	p1++, p2++;
	return (0);
}


