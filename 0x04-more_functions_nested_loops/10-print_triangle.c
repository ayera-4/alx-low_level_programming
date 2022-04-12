#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: int parameter
 */
void print_triangle(int size)
{
if (size > 0)
{
int i, j;
for (i = 1; i <= size; i++)
{
for (j = size; j > i; j--)
_putchar(' ');
for (; j > 0; j--)
{
_putchar('#');
}
_putchar('\n');
}
else
_putchar('\n');
}
