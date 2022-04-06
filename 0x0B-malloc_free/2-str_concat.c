#include "holbertion"

/**
 * str_concat - concatenates two strings
 * @s1: input parameter
 * @s2: input parameter
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
unsigned int len1 = 0;
unsigned int len2 = 0;
if (s1)
{
while (s1[len1])
++len1;
}
else
{
s1 = "";
}
if (s2)
{
while (s2[len2])
++len2;
}
else
{
s2 = "";
}
concat = malloc(sizeof(char) * (len1 + len2 + 1));
if (!concat)
{
return (NULL);
}
if (s1)
{
for (len1 = 0; s1[len1]; ++len1)
concat[len1] = s1[len1];
}
if (s2)
{
for (len2 = 0; s2[len2]; ++len2)
concat[len1 + len2] = s2[len2];
}
concat[len1 + len2] = '\0';
return (concat);
}
