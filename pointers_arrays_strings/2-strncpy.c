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
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
