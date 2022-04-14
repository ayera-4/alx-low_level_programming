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
unsigned int i;
if (separator == NULL)
{
separator = "";
}
va_start(arg, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(arg, int));
if (i == n - 1)
{
break;
}
printf("%s", separator);
}
printf("\n");
va_end(arg);
}
