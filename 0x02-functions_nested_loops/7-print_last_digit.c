#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @c: input parameter
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
int last = c % 10;
if (last < 0)
last = (-1 * last);
_putchar(last + '0');
return (last);
}
