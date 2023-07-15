#include <stdio.h>
/**
*main - Entry point
*Description: 'print string'
*Return: Always 0 (Success)
*/
int main(void)
{
	int count = 0;

	while (count < 10)
{
		printf("%d", count);
		count++;
}
	putchar('\n');
	return (0);
}
