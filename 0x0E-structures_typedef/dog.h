#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/**
 * struct dog - a struct
 * @name: ...
 * @age: ...
 * @owner: ...
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
