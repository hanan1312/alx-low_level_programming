#include <stdio.h>
/**
*main - Entry point
*Description: 'print string'
*Return: Always 0 (Success)
*/
int main(void)
{
	char letter = 'a';
	int count = 0;

	while (count < 26)
{
		if (letter != 'q' && letter != 'e')
{
		putchar(letter);
}
		letter++;
		count++;

}
	putchar('\n');
	return (0);
}
