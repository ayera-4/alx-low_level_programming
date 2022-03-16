#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @c: input parameter
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
printf("%d\n", c % 10);
return (c % 10);
}
