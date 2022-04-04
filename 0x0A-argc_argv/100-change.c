#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints min of coins
 * @argc: number of cmd args
 * @argv: array of cmd args strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}
if (atoi(argv[1]) >= 0)
{
int c = 0;
checker(atoi(argv[1]), c);
}
else if (atoi(argv[1]) < 0)
{
printf("0\n");
}
return (0);
}

/**
 * checker - entry function
 * @c : variable
 * @b : variable
 */
void checker(int c, int b)
{
if (c >= 25)
{
checker(c - 25, b + 1);
}
else if (c >= 10)
{
checker(c - 10, b + 1);
}
else if (c >= 5)
{
checker(c - 5, b + 1);
}
else if (c >= 2)
{
checker(c - 2, b + 1);
}
else if (c >= 1)
{
checker(c - 1, b + 1);
}
else if (c == 0)
{
printf("%d\n", b);
}
}
