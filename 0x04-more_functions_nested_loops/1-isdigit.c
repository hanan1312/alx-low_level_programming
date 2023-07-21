#include <ctype.h>
/**
*_isdigit - helper function
*Description: 'print string'
*@c: input charecter
*Return: Always 0 (Success)
*/
int _isdigit(int c)
{
	int i;

	if (isdigit(c))
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
