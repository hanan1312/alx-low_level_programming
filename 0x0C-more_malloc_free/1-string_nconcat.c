#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string
 * @s2: string
 * @n: bytes
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, l_1 = 0, l_2 = 0;

	while (s1 && s1[l_1])
		l_1++;
	while (s2 && s2[l_2])
		l_2++;

	if (n < l_2)
		s = malloc(sizeof(char) * (l_1 + n + 1));
	else
		s = malloc(sizeof(char) * (l_1 + l_2 + 1));

	if (!s)
		return (NULL);

	while (i < l_1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < l_2 && i < (l_1 + n))
		s[i++] = s2[j++];

	while (n >= l_2 && i < (l_1 + l_2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
