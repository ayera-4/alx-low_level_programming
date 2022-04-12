#include "main.h"

/**
 * print_line - prints straight line
 * @n: int parameter
 */
void print_line(int n)
{
if (n > 0)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j <= i; j++)
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
else
_putchar('\n');
}
