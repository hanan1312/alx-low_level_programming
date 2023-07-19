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

void print_alphabet_x10(void)
{
int i = 0;

while (i < 10)
{
print_alphabet();
i++;
}
return;
}
/**
*_islower - helper function
*Description: 'print string'
*@c: input charecter to be checked
*@out: output to be saved
*Return: Always 0 (Success)
*/
int _islower(char c)
{
int j;

if (islower(c))
{
	j = 1;
}
else
{
	j = 0;
}
return (j);
}
/**
*_isalpha - helper function
*Description: 'print string'
*@c: input charecter to be checked
*@out: output to be saved
*Return: Always 0 (Success)
*/
int _isalpha(char c)
{
int j;

if (isalpha(c))
{
	j = 1;
}
else
{
	j = 0;
}
return (j);
}
/**
*print_sign - helper function
*Description: 'print string'
*@n: input number
*@out: output to be saved
*Return: Always 0 (Success)
*/
int print_sign(int no)
{
	int j;

if (no > 0)
{
	_putchar('+');
	j = 1;
}
else if (no < 0)
{
	_putchar('-');
	j = -1; 
}
else
{
	_putchar('0');
	j = 0;
}
	return (j);
}
/**
*_abs - helper function
*Description: 'print string'
*@n: input number
*Return: Always 0 (Success)
*/
int _abs(int j)
{
	return (abs(j));
}
/**
*print_last_digit - helper function
*Description: 'print string'
*@n: input number
*Return: Always 0 (Success)
*/
int print_last_digit(int j)
{
	j = abs(j) % 10;
	_putchar('0' + abs(j));
	return (abs(j));
}
