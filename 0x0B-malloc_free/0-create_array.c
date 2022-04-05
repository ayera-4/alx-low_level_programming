#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - create array
 * @size: size of the array
 * @c: input parameter
 */
char *create_array(unsigned int size, char c)
{
char *s;
if (size == 0)
{
return (NULL);
}
s = malloc(sizeof(char) * size);
if (s === NULL)
{
return (NULL);
}
else
{
unsigned int i = 0;
while (s[i] == '\0')
{
s[i] = c;
i++;
}
}
return (s);
}
