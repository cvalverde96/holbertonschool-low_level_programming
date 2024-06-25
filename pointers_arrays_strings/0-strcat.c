#include "main.h"

/**
 * _strcat - concatanets two strings
 * @dest: pointer
 * @src: pointer
 * Return: dest va devlver el cpointer al string concatanetated
 */

char* _strcat(char *dest, char *src)
{
	int lenDest, lenSrc;

	lenDest = 0;
	lenSrc = 0;

	while (dest[lenDest] != '\0')
	{
		lenDest++;
	}

	while (src[lenSrc] != '\0')
	{
		dest[lenDest + lenSrc] = src[lenSrc];
		lenSrc++;
	}
	dest[lenDest + lenSrc] = '\0';

	return (dest);
}
