#include "main.h
/**
*print_line - helper function
*Description: 'print string'
*@n: input number of times _ will be printed
*Return: Always 0 (Success)
*/
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}		
	}
	_putchar('\n');
	return;
}
