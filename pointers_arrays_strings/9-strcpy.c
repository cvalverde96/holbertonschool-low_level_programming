#include "main.h"

/**
 * _strcpy - copiando string
 * @dest: pointer var
 * @src: pointer var
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

