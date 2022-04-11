#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints out struct dog
 * @d: struct name
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name == NULL)
{
printf("Name: (nil)\n");
}
else
printf("Name: %s\n", d->name);
if (d->age == NULL)
printf("Age: (nil)\n");
else
printf("Age: %.6f\n", d->age);
if (d->owner == NULL)
{
printf("Name: (nil)\n");
}
printf("Owner: %s\n", d->owner);
}
}
