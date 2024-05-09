#include "search_algos.h"

/**
 * interpolation_search - searches for a value
 * @array: array
 * @size: size_t
 * @value: int
 * Return: Always EXIT_SUCCESS
 */
int interpolation_search(int *array, size_t size, int value)
{
int low = 0, high = size - 1;
size_t pos;

if (array == NULL)
{
return (-1);
}

while (low <= high && value >= array[low] && value <= array[high])
{
pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

printf("Value checked array[%d]\n", array[pos]);
if (array[pos] == value)
{
return (pos);
}

if (value < array[pos])
{
high = pos - 1;
}
else
{
low = pos + 1;
}
}
return (-1);
}