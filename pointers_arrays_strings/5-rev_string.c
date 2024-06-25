#include "main.h"

/**
 * rev_string - reverse string
 * @s: pointer
 */


void rev_string(char *s)
{
	int l = 0;
	int i;
	char t;

	while (s[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l / 2; i++)
	{
		t = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = t;
	}
}
