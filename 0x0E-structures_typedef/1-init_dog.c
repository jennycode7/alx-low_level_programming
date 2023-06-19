#include "dog.h"

/**
 * init_dog - initializes dog
 * @name: name
 * @d: pointer to struct
 * @age: age of struct
 * @owner: owner
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
