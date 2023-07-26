#include "main.h"

/**
  * print_number - print numbers chars
  * @n: integer params
  * Return: 0
 **/

void print_number(int n)
{
	unsigned int new_n;

	 new_n = n;

	if (n < 0)
	{
		_putchar('-');
		new_n = -n;
	}

	if (new_n / 10 != 0)
	{
		print_number(new_n / 10);
	}
	_putchar((new_n % 10) + '0');
}
