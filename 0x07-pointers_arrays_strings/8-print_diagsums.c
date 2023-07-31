#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 * Return: charecter.
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sudiag_1, diag_2;

	diag_1 = 0;
	diag_2 =  0;

	for (i = 0; i < size; i++)
	{
		diag_1 += a[(size * i) + i];
		diag_2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", diag_1, diag_2);
}
