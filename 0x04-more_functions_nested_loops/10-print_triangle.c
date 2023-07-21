#include "main.h"

/**
*print_triangle - helper function
*Description: 'print string'
*@size: input number of times _ will be printed
*Return: Always 0 (Success)
*/
void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
	return;
}
