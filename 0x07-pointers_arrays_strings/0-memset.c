#include <string.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: target location
 * @b: value
 * @n: number of memory
 * Return: charecter.
 */
char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);
return (s);
}
