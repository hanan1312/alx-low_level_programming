#include <stdio.h>
/**
*main - Entry point
*Description: 'print string'
*Return: Always 0 (Success)
*/
int main(void)
{
	char letter = 'z';
	int count = 0;

	while (count < 26)
{
		putchar(letter);
		letter--;
		count++;
}
	putchar('\n');
	return (0);
}
