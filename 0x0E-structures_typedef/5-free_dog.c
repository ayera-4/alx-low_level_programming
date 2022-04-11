#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - Entry point
 * @d: struct to free
 * Return: 0
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->age);
free(d->owner);
}
}