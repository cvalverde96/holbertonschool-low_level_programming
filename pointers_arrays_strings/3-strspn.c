#include "main.h"

/**
 * _strspn - get length of prefix substring
 * @s: pointer
 * @accept: p
 * Return: s
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int i, j;
	int m;

	for (i = 0; s[i] != '\0'; i++)
	{
		m = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				m = 1;
				break;
			}
		}
		if (m)
		{
			c++;
		}

		else
		{
			break;
		}

	}
	return (c);
}
