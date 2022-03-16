#include "main.h"
#include <stdlib.h>

/**
 * _islower - returns 1 or 0
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
if (islower(c) == 1)
_putchar(1);
else
_putchar(0);
}
