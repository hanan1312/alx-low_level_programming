#include "main.h"
#include <stdio.h>

/**
 * int swap - check the code
 *
 * input_1: a
 * input_2: b
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
