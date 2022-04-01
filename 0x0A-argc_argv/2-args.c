#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: number of cmd inputs
 * @argv: array of cmd input strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc-1; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
