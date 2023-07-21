#include "main.h
/**
*print_line - helper function
*Description: 'print string'
*@n: input number of times _ will be printed
*Return: Always 0 (Success)
*/
void print_line(int n)
{
int j;

	if (n > 0)
	{
		while (j < n)
		{
			_putchar('_');
			j++;
		}
	}
	_putchar('\n');
	return;
}
