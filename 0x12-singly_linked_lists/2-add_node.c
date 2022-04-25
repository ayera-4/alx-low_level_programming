#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node at head of the list
 * @head: pointer to start of a linked list
 * @str: data string for node
 * Return: address to new element
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int length = 0;
while (str[len])
len++
new = malloc(sizeof(list_t));
if (!new)
return (NULL);
new->str = strdup(str);
new->len = len;
new->next = (*head);
(*head) = new;
return(*head);
}
