#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - add node at the beginning of a listint_t
 * @head: pointer to first node
 * @n: input integer
 * Return: address of active node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = (*head);
(*head) = new;
return (*head);     
}
