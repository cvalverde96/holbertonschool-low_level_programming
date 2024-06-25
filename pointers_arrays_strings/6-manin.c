#include "main.h"
#include <stdio.h>

/**
 * main - capitalizing
 * Return: 0 es exto
 */

int main(void)
{
	char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
	char *ptr;

	ptr = cat_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
