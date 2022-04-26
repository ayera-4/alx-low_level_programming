#include "lists.h"

/**
 * reverse_listint - reverse a list
 * @head: pointer to first node
 * Return: pointer to first node in reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next = NULL;
while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;
return (*head);
}
