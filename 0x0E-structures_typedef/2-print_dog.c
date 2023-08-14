#include <stdio.h>
#include "dog.h"

/**
* print_dog - pritns passed name
* @d: struct pointer
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: %p\n", d->name);
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: %p\n", d->owner);
	else
		printf("Owenr: %s\n", d->owner);
}
