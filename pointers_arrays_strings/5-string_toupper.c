#include "main.h"

/**
 * string_toupper - function que imprime string to upper
 * Return: variable uppercase
 * @str: pointer
 */

char *string_toupper(char *str)
{
	char *i = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ('a' - 'A');
		}
		str++;
	}
	return (i);

}

