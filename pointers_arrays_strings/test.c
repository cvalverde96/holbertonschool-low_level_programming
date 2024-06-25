#include "main.h"

/**
 * _strcat - concatanets two strings
 * @dest: pointer
 * @src: pointer
 * Return: dest va devlver el cpointer al string concatanetated
 */

char *_strcat(char *dest, char *src)
{
	int strlen(dest);
	int dest_len = strlen(dest);
	size_t i;
	int n;

	for (i = 0; i < n && src[i] != '\0'; i++);
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
