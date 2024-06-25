#include "main.h"

/**
 * _atoi - convierte string a integer
 * @s: pointer
 * Return: valor integer de string
 */

int _atoi(char *s)
{
	int i = 0;
	int signo = 1;
	int r = 0;
	int st = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			signo *= -1;
		}
		else if (s[i] == '+')
		{
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			st = 1;
			r = r * 10 + (s[i] - '0');
		}
		else if (st)
		{
			break;
		}
		i++;
	}
	return (r * signo);
}
