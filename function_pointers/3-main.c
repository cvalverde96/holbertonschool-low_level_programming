#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - funcion para aceptar argumentos
 * @argc: argument count
 * @argv: argument vector
 * Return: result
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *oper;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	oper = argv[2];

	if (argc != 4)
	{
		printf("Error 98\n");
		return (98);
	}

	if (oper[0] != '+' && oper[0] != '-' && oper[0] != '*' && oper[0] != '/' && oper[0] != '%')
	{
		printf("Error 99\n");
		return (99);
	}

	else
	{
		result = (get_op_func(argv[2])(num1, num2));
		return (result);
	}

}
