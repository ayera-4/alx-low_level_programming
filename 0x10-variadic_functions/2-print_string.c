#include "variadic_functions"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings
 * @separator: input parameter
 * @n: input parameter
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
if (separator == NULL)
{
separator = "";
}
va_list arg;
unsigned int i;
va_start(arg, n);
for (i = 0; i < n; i++)
{
if (va_arg(arg, char *) == NULL)
printf("(nil)");
else
printf("%s", va_arg(arg, char *));
if (i != n - 1)
printf("%s", separator);
}
printf("\n");
va_end(arg);
}
