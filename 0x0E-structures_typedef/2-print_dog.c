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
d->name = "(nil)";
}
printf("Name: %s\n", d->name);
if (d->age != 0)
{
printf("Age: %.6f\n", d->age);
}
else
{
printf("Age: (nil)\n");
}
if (d->owner == NULL)
{
d->name = "(nil)";
}
printf("Owner: %s\n", d->owner);
}
}
