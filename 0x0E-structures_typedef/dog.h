#ifndef DOG
#define DOG

/**
* struct dog - declare name, owner and age
* @name: Name of the dog
* @owner: Owner of the dog
* @age: Age of the dog
*/

struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
