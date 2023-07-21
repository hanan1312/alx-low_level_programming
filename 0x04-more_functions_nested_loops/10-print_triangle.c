#include "main.h"

/**
*print_triangle - helper function
*Description: 'print string'
*@size: input number of times _ will be printed
*Return: Always 0 (Success)
*/
void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - i - 1 ; j++)
			{
				_putchar(' ');
			}

			for (j = i; j < size; j++)
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
