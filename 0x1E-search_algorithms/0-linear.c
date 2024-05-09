#include "search_algos.h"

/**
 * linear_search - searches for a value
 * @array: array
 * @size: size_t
 * @value: int
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
int i;

if (array == NULL)
{
return (-1);
}
for (i = 0; i < (int)size; i++)
{
printf("Value checked array[%u] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return ((int)i);
}
}
return (-1);
}

