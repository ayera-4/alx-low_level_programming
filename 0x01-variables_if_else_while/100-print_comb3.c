#include <stdio.h>

/**
 * main -Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if (i != j)
{
_putchar(i + '0');
_putchar(j + '0');
}
if (i != 9)
{
_putchar(',');
_putchar(' ');
}
}
}
}
