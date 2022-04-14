#include "variadic_functions.h"
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
va_list arg;
unsigned int i;
char *str;
if (separator == NULL)
{
separator = "";
}
va_start(arg, n);
for (i = 0; i < n; i++)
{
str = va_arg(arg, char *);
if (str == NULL)
{
printf("(nil)");
break;
}
printf("%s", str);
if (i == n - 1)
{
break;
}
printf("%s", separator);
}
printf("\n");
va_end(arg);
}
