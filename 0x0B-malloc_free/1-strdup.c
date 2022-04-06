#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns pointer to a newly allocated space
 * @str: input parameter
 * Return: pointer
 */
char *_strdup(char *str)
{
int i, j;
char *s;
if (str == NULL)
{
return (NULL);
}
j = 0;
while (str[j] != 0)
{
j++;
}
s = malloc(1 + (j *sizeof(*str)));
if (s == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < j; i++)
{
s[i] = str[i];
}
}
return (s);
}
