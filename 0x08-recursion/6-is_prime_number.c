/**
 * aid_func - check the code
 * @n: input number
 * @i: number
 * Return: charecter.
 */
int aid_func(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (aid_func(n, i - 1));
}
/**
 * is_prime_number - check the code
 * @n: input number
 * Return: charecter.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (aid_func(n, n - 1));
	}
}
