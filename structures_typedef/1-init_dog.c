#include <stdlib.h>
#include "dog.h"


/**
 * init_dog - initializing dog strucutre
 * @d: struct dog *d
 * @name: pointer to char para string de nombre de dogo
 * @age: edad de dogo en float
 * @owner: pointer to char para string de nombre de owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
