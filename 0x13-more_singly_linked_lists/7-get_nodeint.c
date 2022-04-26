#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node
 * @head: pointer to head node
 * @index: input index
 */
listint *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *temp = head;
while (temp && i < index)
{
temp = temp->next;
i++;
}
return (temp ? temp : NULL);
}
