#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 Success
 */
void print_alphabet_x10(void)
{
int i = 1;
char c = 'a';
while (i <= 10)
{
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
i++;
}
}
