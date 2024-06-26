#include <stdio.h>

/**
 * main - imprmiendo toda combinacion de numero sin repetir digitos
 * Return: 0 significa extio.
 */

int main(void)
{
	int i = 0;
	int j;

	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			putchar(j + '0');
			putchar(j + '0');
			if (i != 8 || i <= 9)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}
		i++;
	}
	return (0);
}



