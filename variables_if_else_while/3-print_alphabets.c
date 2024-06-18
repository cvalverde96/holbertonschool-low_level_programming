#include <stdio.h>

/**
 * main - estamos imprimiendo abecedario
 * Return: 0 significa exito
 */

int main(void)
{
	char ch;
	char CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (CH = 'A'; CH <= 'Z'; CH++)
	{
		putchar(CH);
	}

	putchar('\n');

	return (0);
}




