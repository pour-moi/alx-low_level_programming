#include <stdio.h>
#include "dog.h"

/**
* init_dog - assigns name, age and owner
* struct dog d - variable of dog datatype
*
* @d: struct variable
* @name: argument to pass
* @age: argument to pass
* @owner: argument to pass
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
