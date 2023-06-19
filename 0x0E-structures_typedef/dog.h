#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/**
 * struct dog - a struct
 * @name: ...
 * @age: ...
 * @owner: ...
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
