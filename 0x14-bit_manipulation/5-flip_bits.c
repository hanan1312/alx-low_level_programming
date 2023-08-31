#include "main.h"

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: number
 * @m: number
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int j;

	j = n ^ m;
	i = 0;

	while (j)
	{
		i++;
		j &= (i - 1);
	}

	return (i);
}
