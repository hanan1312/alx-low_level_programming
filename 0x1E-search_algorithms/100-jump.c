#include "search_algos.h"

/**
 * jump_search - searches for a value
 * @array: array
 * @size: size_t
 * @value: int
 * Return: Always EXIT_SUCCESS
 */
int jump_search(int *array, size_t size, int value)
{
int jump = sqrt(size), current = 0, i;

if (array == NULL)
{
return (-1);
}

while (current < (int)size && array[current] <= value)
{
printf("Value checked array[%d] = [%d]\n", i, array[current]);
current += jump;
}

current = current - jump;
if (current < 0)
{
return (-1);
}

for (i = current; i < (int)size && i <= current + jump - 1; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[current]);
if (array[i] == value)
{
return (i);
}
}

return (-1);
}