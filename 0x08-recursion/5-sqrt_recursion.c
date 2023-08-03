/**
 * aid_func - check the code
 * @n: input number
 * @i: number
 * Return: charecter.
 */
int aid_func(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
return (aid_func(n, i + 1));
}
/**
 * _sqrt_recursion - check the code
 * @n: input number
 * Return: charecter.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (aid_func(n, 0));
	}
}
