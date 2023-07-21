#include "main.h
#include <stdlib.h>

/**
*print_line - helper function
*Description: 'print string'
*@n: input number of times _ will be printed
*Return: Always 0 (Success)
*/
void print_line(int n)
{
int j;

if (n > 0)
{
for (j = 0; j < n; ++j)
{
_putchar('_');
}
}
_putchar('\n');
return;
}
