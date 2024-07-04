#include "main.h"
#include <stdlib.h>

int _strlen(char *str);

/**
 * string_nconcat - funcion para concatenate dos strings
 * como strcpy y strncat tenemos que conseguir el lenght
 * pero como estamos usando malloc necesitamos el lenght
 * completo para allocate la memoria
 * @s1: string 1
 * @s2: string 2
 * @n: bytes max
 * Return: pointer to char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2, i;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	if (n >= len_s2)
	{
		n = len_s2;
	}

	str = malloc(len_s1 + n + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len_s1; i++)
	{
		str[i] = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		str[len_s1 + i] = s2[i];
	}

	str[len_s1 + n] = '\0';

	return (str);
}

/**
 * _strlen - funcion para calcular string lenght
 * para que funcion no pase de 40 lineas
 * @str: pointer to string/char
 * Return: lenght en bytes`
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}
