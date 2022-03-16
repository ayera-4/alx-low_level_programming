#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints last digit of a number
 * @c: input parameter
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
_putchar((48 + c) % 10);
return (c % 10);
}
