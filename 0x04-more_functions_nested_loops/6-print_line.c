#include "main.h"

/**
 * print_line - prints straight line
 * @n: int parameter
 */
void print_line(int n)
{
if (n > 0)
{
int i;
for (i = 0; i < n; i++)
_putchar('_');
}
_putchar('\n');
}
