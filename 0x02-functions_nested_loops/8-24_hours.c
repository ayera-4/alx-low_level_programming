#include "main.h"

/**
 * jack_bauer - prints time till 24hours
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
int hours;
int minutes;
for (hours = 0; hours <= 24; hours++)
{
for (minutes = 0; minutes <= 60; minutes++)
{
_putchar((hours / 10) + '0');
_putchar((hours % 10) + '0');
_putchar(':');
_putchar((minutes / 10) + '0');
_putchar((minutes % 10) + '0');
}
_putchar('\n');
}
}
