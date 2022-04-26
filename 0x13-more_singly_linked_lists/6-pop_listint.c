#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - delete head node
 * @head: pointer to head node
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;
if (!head || !*head)
return (0);
n = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (n);
}
