#include <string.h>
/**
 * _memset - check the code
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
