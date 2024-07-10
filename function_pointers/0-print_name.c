#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: pointer to character for name string
 * @f: pointer to void function
 */

void print_name(char *name, void (*f)(char *))
{

	f(name);

}
