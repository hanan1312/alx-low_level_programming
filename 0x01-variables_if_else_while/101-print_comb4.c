#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*Description: 'print string'
*Return: Always 0 (Success)
*/
int main(void)
{
	int i, j, k;
	for (i = 0; i < 7; i++)
{
	for (j = i + 1; j < 8; j++)
{
	for (k = j + 1; k < 9; k++)
{
	if (i != j && i != k && j != k)
{
	int num = (i * 100) + (j * 10) + k;

	putchar((num / 100) + '0');
	putchar(((num / 10) % 10) + '0');
	putchar((num % 10) + '0');
	if (i != 6 || j != 7 || k != 8)
{
	putchar(',');
	putchar(' ');
}
}
}
}
}
	putchar('\n');
	return (0);
}
