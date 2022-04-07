#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: input parameter
 * @s2: input parameter
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
int i, j, k, l;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
i = 0, j = 0;
while (*(s1 + 1) != '\0')
{
i++;
}
while (*(s2 + j) != '\0')
{
j++;
}
concat = malloc(i + j + 1);
if (concat == 0)
{
return (0);
}
for (k = 0; k < i; k++)
{
*(concat + k) = *(s1 + k);
}
for (k = 0, l = i; k < j; l++, k++)
{
*(concat + 1) = *(s2 + k);
}
*(concat + 1) = '\0';
return (concat);
}
