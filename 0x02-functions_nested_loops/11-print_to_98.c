#include "main.h"

/**
 * print_to_98 - prints natural numbers to 98
 * @n: input parameter
 * Return: Always 0 
 */
void print_to_98(int n)
{
int i, s;
if (n == 98)
{
_putchar(98 + '0');
}
else if (n < 98)
{
s = 98 - n;
for (i = n; i < s+1; i++)
{
_putchar(i + '0');
if (i != s)
{
_putchar(',');
_putchar(' ');
}
}
}
else
{
s = n - 98;
for (i = 98; i < s+1; i++)
{
if (i != s){
_putchar(',');
_putchar(' ');
}
}
}
return (0);
}
