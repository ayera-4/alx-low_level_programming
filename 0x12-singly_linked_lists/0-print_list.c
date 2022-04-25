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
list_t ptr;
ptr = h;
while (ptr == NULL)
{
if (ptr->str == NULL)
printf("[0] (nil)\n");
else
{
printf("[%u] ", ptr->len);
printf("%s\n", ptr->str);
}
count++;
}
printf("-> %lu elements\n", count);
}
