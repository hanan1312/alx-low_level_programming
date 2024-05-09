#include "search_algos.h"

/**
 * binary_search - searches for a value
 * @array: array
 * @size: size_t
 * @value: int
 * Return: Always EXIT_SUCCESS
 */

int binary_search(int *array, size_t size, int value)
{
int low = 0, high = size - 1, mid, i;

if (array == NULL)
{
return (-1);
}
while (low <= high)
{
mid = low + (high - low) / 2;

printf("Searching in array: ");
for (i = low; i < high; i++)
{
printf("%d, ", array[i]);
}
printf("%d\n", array[i]);

if (array[mid] == value)
{
return (mid);
}
else if (array[mid] < value)
{
low = mid + 1;
}
else
{
high = mid - 1;
}
}

return (-1);
}
