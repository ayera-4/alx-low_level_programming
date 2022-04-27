#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: pointer to first node
 * Return: number of elements in freed list
 */
size_t free_listint_safe(listint_t **h)
{
size_t len = 0;
int check;
listint_t *temp;
if (!h || !*h)
return (0);
while (*h)
{
check = *h - (*h)->next;
if (check > 0)
{
temp = (*h)->next;
free(*h);
*h = temp;
len++;
}
else
{
free(*h);
*h = NULL;
len++;
break;
}
}
*h = NULL;
return (len);
}
