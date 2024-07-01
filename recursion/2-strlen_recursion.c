#include "main.h"

/**
 * _strlen_recursion - cogiendo lenght of stirng
 * @s: pointer to string
 * Return: value of lenght
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + _strlen_recursion(s + 1));
	}

}
