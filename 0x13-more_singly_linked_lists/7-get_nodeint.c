#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node
 * @head: pointer to head node
 * @index: input index
 * Return: address of nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;
if (!temp)
return (NULL);
while (temp && i < index)
{
temp = temp->next;
i++;
}
return (temp);
}
