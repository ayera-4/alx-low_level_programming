int _putchar(char c)
{
return (write(1, &c, 1));
}

void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
_putchar(c);
c++;
_putchar('\n');
}

