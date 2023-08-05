#include <ctype.h>
/**
*_isdigit - helper function
*Description: 'print string'
*@c: input charecter
*Return: Always 0 (Success)
*/
int _isdigit(int c)
{
int out;

if (isdigit(c))
{
out = 1;
}
else
{
out = 0;
}
return (out);
}
