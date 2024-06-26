#include "main.h"

/**
 * leet - codigo para la oracion
 * @str: pointer
 * Return: oracion en codigo
 */

char *leet(char *str)
{
	char *s = str;
	char mapping[256] = {0};

	mapping['a'] = '4';
	mapping['A'] = '4';
	mapping['e'] = '3';
	mapping['E'] = '3';
	mapping['o'] = '0';
	mapping['O'] = '0';
	mapping['t'] = '7';
	mapping['T'] = '7';
	mapping['l'] = '1';
	mapping['L'] = '1';

	while (*s)
	{
		if (mapping[(unsigned char)*s])
		{
			*s = mapping[(unsigned char)*s];
		}
		s++;
	}
	return (str);
}
