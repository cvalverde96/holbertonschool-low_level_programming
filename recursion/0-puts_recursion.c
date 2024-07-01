#include "main.h"

/**
 * _puts_recursion - imprime string usando recursion
 * @s: primer valor de pointer de string
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}

	else
	{
		_putchar(s[i]);
		_puts_recursion(s + 1);
	}

}
