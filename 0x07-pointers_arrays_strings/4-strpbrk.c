#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: target location
 * @accept:value
 * Return: character
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
