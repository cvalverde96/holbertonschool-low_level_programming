#include "main.h"

/**
 */

char *_strncat(char *dest, char *src, int n)
{
	int length_dest = 0;
	int length_src = 0;

	while (dest[length_dest] != '\0')
	{
		length_dest++;
	}

	while (length_src < n && src[length_src] != '\0')
	{
		dest[length_dest + length_src] = src[length_src];
		length_src++;

	}
	dest[length_dest + length_src] = '\0';

	return (dest);
}
