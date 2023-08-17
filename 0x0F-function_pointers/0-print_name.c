/**
*print_name - prints a name
*Description: 'print string'
*@name: name
*@f: function
*Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
	return;
}
