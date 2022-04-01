#include "main.h"
#include <stdio.h>

/**
 * main - print product of two numbers
 * @argc: number of cmd inputs
 * @argv: array of cmd input strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
if (argc == 3)
{
int a = argv[1];
int b = argv[2];
int product = a * b;
printf("%d\n", product);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
