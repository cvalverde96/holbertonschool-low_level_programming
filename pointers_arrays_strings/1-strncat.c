#include "main.h"

/**
 * _strncat - concatante usanto strncat
 * @dest: pointer
 * @src: pointer
 * @n: int de byte
 * Return: valor de concatanation
 */

char *_strncat(char *dest, char *src, int n)
{
	int lenDest = 0;
	int i = 0;

	while (dest[lenDest] != '\0')
	{
		lenDest++;
	}

	for (i = 0 ; i < n && src[i] != '\0'; i++)
	{
		dest[lenDest + i] = src[i];
	}

	dest[lenDest + i] = '\0';

	return (dest);

}
