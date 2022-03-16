#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints last digit of a number
 * @c: input parameter
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
int last = c % 10;
_putchar(last);
return (last);
}
