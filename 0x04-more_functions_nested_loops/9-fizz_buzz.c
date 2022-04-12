#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints from 1 to 100
 */
void main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (((i % 3) == 0)) && ((i % 5) == 0)))
{
if ((i % 3) == 0)
printf("Fizz");
if ((i % 5) == 0)
printf("Buzz");
}
else
printf("%d", i);
if (i != 100)
printf(" ");
}
printf("\n");
}
