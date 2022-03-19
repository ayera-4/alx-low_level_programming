#include "main.h"

/**
 * times_table -prints n table
 * Return: Always 0 (Success)
 */
void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
int p = i * j;
_putchar(p + '0');
if (i < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
