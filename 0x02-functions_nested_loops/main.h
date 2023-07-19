#include <ctype.h>
#include <stdlib.h>
/**
*print_alphabet - helper function
*Description: 'print string'
*@c: charecter to start
*@i: counter
*Return: Always 0 (Success)
*/
int _putchar(char c);

void print_alphabet(void)
{
	 char c;
	for (c = 'a'; c <= 'z'; c++)
{
	putchar(c);
}
	putchar('\n');
	return (0);
}
