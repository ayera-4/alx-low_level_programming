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
if (d->name)
printf("Name: %s\n", d->name);
else
d->name = "(nil)";
printf("Age: %.6f\n", d->age);
if (d->owner)
printf("Owner: %s\n", d->owner);
else
d->owner = "(nil)";
}
}
