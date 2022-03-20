#include "main.h"

/**
 * print_to_98 - prints natural numbers to 98
 * @a: input parameter
 * Return: Always 0 
 */
void print_to_98(int a)
{
int i, s;
int n = a;
if (n == 98)
{
_putchar(n + '0');
}
else if (n < 98)
{
s = 98 - n;
for (i = n; i < s + n + 1; i++)
{
_putchar(i + '0');
if (i != (s + n))
{
_putchar(',');
_putchar(' ');
}
}
}
else if (n > 90)
{
s = n - 98;
for (i = s + 98; i >= 98; i--)
{
_putchar(i + '0');
if (i != 98){
_putchar(',');
_putchar(' ');
}
}
}
}
