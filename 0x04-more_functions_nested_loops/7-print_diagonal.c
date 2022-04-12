#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: int parameter
 */
void print_diagonal(int n)
{
if (n > 0)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 1; j <= i; j++)
_putchar('\\');
}
_putchar('\\');
_putchar('\n');
}
else
_putchar('\n');
}
