#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j;
	int l;

	if (b == NULL)
		return (0);

	for (l = 0; b[l]; l++)
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);
	}

	for (j = 1, i = 0, l--; l >= 0; l--, j *= 2)
	{
		if (b[l] == '1')
			i += j;
	}

	return (i);
}
