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
int product = i * j;
if (product == 0)
{
_putchar('0');
_putchar(' ');
}
else if (product >= 10)
{
_putchar((product / 10) + '0');
_putchar((product % 10) + '0');
}
else if ((product < 10) && (j != 0))
{
_putchar(' ');
_putchar((product % 10) + '0');
}
if (j != 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}
