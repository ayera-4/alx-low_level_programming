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
if (i != 0)
{
_putchar(',');
_putchar(' ');
}
if (y == 0)
{
_putchar('0');
}
else if (product >= 10)
{
  _putchar((product / 10) + '0');
  _putchar((product % 10) + '0');
}
else if ((product < 10) && (y != 0))
{
_putchar(' ');
_putchar((product % 10) + '0');
}
}
 _putchar('\n');
}
