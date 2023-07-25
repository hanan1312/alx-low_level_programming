#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char v;
	int i, str_l_1, str_l_2;

	str_l_1 = 0;
	str_l_2 = 0;

	while (s[str_l_1] != '\0')
	{
		str_l_1++;
	}

	str_l_2 = str_l_1 - 1;

	for (i = 0; i < str_l_1 / 2; i++)
	{
		v = s[i];
		s[i] = s[str_l_2];
		s[str_l_2--] = v;
	}
}
