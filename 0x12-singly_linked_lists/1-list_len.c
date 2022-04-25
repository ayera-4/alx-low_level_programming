#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *list_len - returns number of elements of the list_t list
 * @h: input structure
 * Return: number of nodes in the list
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
