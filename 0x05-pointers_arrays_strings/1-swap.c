#include "main.h"
#include <stdio.h>

/**
 * swap_int -  swaps the values of int a and int b
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
