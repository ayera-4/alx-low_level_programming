#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 Success
 */
int main(void)
{
int i = 0;
while (i < 10)
{
putchar(48 + i);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
