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
	_putchar(c);
}
	_putchar('\n');
	return;
}
/**
*print_alphabet_x10 - helper function
*Description: 'print string'
*@c: charecter to start
*@i: counter
*Return: Always 0 (Success)
*/
int _putchar(char c);

void print_alphabet_x10(void)
{
int i = 0;

for (i = 0; i < 10; ++i)
{
print_alphabet();
}
return;
}
