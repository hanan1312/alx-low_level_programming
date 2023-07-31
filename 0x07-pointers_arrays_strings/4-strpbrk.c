#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: stringcontaining the bytes to look for
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
