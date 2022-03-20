#include "main.h"

/**
 * print_times_table - prints n times table
 * @n: Input parameter
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
int i, j;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int product = i * j;
if (j == 0)
{
_putchar('0');
_putchar(',');
_putchar(' ');
}
if (product >= 10)
{
_putchar((product / 10) + '0');
_putchar((product % 10) + '0');
}
else if ((product < 10) && (j != 0))
{
_putchar(' ');
_putchar((product % 10) + '0');
}
if ((j != n) && (j != 0))
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
