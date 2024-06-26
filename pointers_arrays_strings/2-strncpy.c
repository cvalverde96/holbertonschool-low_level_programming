#include "main.h"

/**
 * _strncpy - copy string
 * @dest: pointer
 * @src: pointer
 * @n: int
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int lenDest = 0;
	int i;

	while (dest[lenDest] != '\0')
	{
		lenDest++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[lenDest + 1] = src[i];
	}

	dest[lenDest + 1] = '\0';

	return (dest);
}
