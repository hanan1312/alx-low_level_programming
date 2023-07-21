#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
int j;
int k;
int i;

if (size > 0)
{
for (j = 0; j < size; ++j)
{
for (k = 0; k < size - j - 1; ++k)
{
_putchar(' ');
}
for (i = k; i < size; ++i)
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
