#include "main.h"
#include <string.h>
/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 * Return: charecter.
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
