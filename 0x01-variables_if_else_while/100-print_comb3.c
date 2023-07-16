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
	int i, j;
	
	for (i = 0; i < 9; i++)
{
	for (j = i + 1; j <= 9; j++)
{
	int num = (i * 10) + j;
	
	putchar((num / 10) + '0');
	putchar((num % 10) + '0');
	if (i != 8 || j != 9)
{
	putchar(',');
	putchar(' ');
 }
 }
 }
	putchar('\n');
	return (0);
}
