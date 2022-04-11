#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize struct dog
 * @d: struct name
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if(d == NULL)
{
d = malloc(sizeof(struct dog));
if (d != NULL)
d->name = name;
d->age = age;
d->owner = owner;
}
}
