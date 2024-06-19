#include <stdio.h>

/**
 * main - imrpimiendo abecedario en versa usando putchar
 * Return: 0 significa exito
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}

	putchar('\n');

	return (0);
}

