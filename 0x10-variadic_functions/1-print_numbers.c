#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers
 * @separator: input parameter
 * @n: input parameter
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list arg;
int i;
if (separator == NULL)
va_start(arg, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(arg, int));
if (separator != NULL && i != n - 1)
printf("%s", separartor);
}
_putchar('\n');
va_end(arg);
}
