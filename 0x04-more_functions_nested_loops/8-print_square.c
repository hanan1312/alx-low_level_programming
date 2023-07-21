#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */
void print_square(int size)
{
int j;
int k;

if (size > 0)
{
for (j = 0; j < size; ++j)
{
for (k = 0; k < size; ++k)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
return;
}
