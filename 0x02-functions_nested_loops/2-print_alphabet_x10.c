#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 Success
 */
void print_alphabet_x10(void);
int main(void)
{
print_alphabet_x10();
return (0);
}
void print_alphabet(void)
{
int i = 1;
char c = 'a';
while (i <= 10)
{
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
i++;
}
}
