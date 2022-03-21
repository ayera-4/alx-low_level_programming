#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 Success
 */
int main(void)
{
int n1 = 1;
int n2 = 2;
int sum = n2;
int nth = n1 + n2;
while (nth <= 4000000)
{
if ((nth % 2) == 0)
{
sum += nth;
}
n1 = n2;
n2 = nth;
nth = n2 + n1;
}
printf("%d", sum);
printf("\n");
return (0);
}
