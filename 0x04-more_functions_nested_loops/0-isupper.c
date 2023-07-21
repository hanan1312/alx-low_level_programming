#include <ctype.h>
/**
*_isupper - helper function
*Description: 'print string'
*@c: input charecter
*Return: Always 0 (Success)
*/
int _isupper(int c)
{
int out;

if (isupper(c))
{
out = 1;
}
else
{
out = 0;
}
return (out);
}
