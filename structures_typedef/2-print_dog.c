#include <stdio.h>
#include "dog.h"

/**
 * print_dog - funcion para imprimir info de dogo
 * @d: pointer to struct
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
