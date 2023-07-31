#include "main.h"
#include <string.h>
/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: character
 */
char *_strchr(char *s, char c)
{
	char *a;

	a = strchr(s, c);
	return (a);
}
