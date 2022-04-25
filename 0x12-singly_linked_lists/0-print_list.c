#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - print elements of the list_t list
 * @h: input structure
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
count++;
}
return (count);
}
