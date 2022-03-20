#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 Success
 */
int main(void)
{
int i, nth;
int number = 50;
int n1 = 1;
int n2 = 2;
printf("%d, ", n1);
printf("%d, ", n2);
for (i = 0; i < n - 2; i++)
{
nth = n1 + n2;
printf("%d", nth);
if(i != (n - 3))
{
printf(", ");
}  
n1 = n2;
n2 = nth;
}
printf("\n");
return (0);
}
