#include "main.h"
#include <stdio.h>

/**
 * int swap - check the code
 *
 * @a:input_1
 * @b:input_2
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
