#include "dog.h"

/**
 * new_dog - pointer
 * @name: ...
 * @age: ...
 * @owner: ...
 * Return: ...
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int x, y;

	if (name != NULL && owner != NULL)
	{
		x = strlen(name) + 1;
		y = strlen(owner) + 1;


		dog = malloc(sizeof(dog_t));

		if (dog == NULL)
		{
			return (NULL);
		}


		dog->name = malloc(sizeof(char) * x);
		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}

		dog->owner = malloc(sizeof(char) * y);
		if (dog->owner == NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}

		dog->name = strcpy(dog->name, name);
		dog->owner = strcpy(dog->owner, owner);
		dog->age = age;
	}
	return (dog);
}
