#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum up all parameters
 * @n: input parameter
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
{
return (0);
}
else
{
va_list arg;
int sum = 0;
unsigned int i;
va_start(arg, n);
for (i = 0; i < n; i++)
{
sum += va_arg(arg, int);
}
va_end(arg);
return (sum);
}
}
