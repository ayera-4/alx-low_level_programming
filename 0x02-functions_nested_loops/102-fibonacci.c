#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 Success
 */
int main(void)
{
int i;
int n = 50;
unsigned long n1 = 1;
unsigned long n2 = 2;
unsigned long nth = n1 + n2;
printf("%lu, ", n1);
printf("%lu, ", n2);
for (i = 0; i < n - 2; i++)
{
printf("%lu", nth);
if (i != n - 3)
{
printf(", ");
}
n1 = n2;
n2 = nth;
nth = n2 + n1;
}
printf("\n");
return (0);
}
