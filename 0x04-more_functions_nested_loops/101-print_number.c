#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	int new_n;

	if (n < 0)
	{
		new_n = -n;
		_putchar('-');
	} else
	{
		new_n = n;
	}

	if (new_n < 10)
	{
		_putchar('0' + new_n); 
	}

	_putchar((new_n % 10) + '0');
}
