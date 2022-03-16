#include "main.h"

/**
 * print _alphabet_x10 - prints lowercase alphabet 10 times 
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
