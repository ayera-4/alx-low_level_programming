#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements in listint_t list
 * @h: pointer to first node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
