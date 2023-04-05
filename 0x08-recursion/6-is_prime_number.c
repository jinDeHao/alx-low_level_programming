#include "main.h"
/**
 * is_prime_number - if the input integer is a prime number
 * @n: number
 * Return: On success 1.
 * Other ways, 0 is returned.
 */
int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}
	else
	{
		return (omar_prime_fun(n, n - 1));
	}
}

/**
 * omar_prime_fun - if the input integer is a prime number
 * @n: number
 * @s: div
 * Return: On success 1.
 * Other ways, 0 is returned.
 */
int omar_prime_fun(int n, int s)
{
	if (n % s == 0 && s > 1)
	{
		return (0);
	}
	else if (n % s != 0 && s > 1)
	{
		return (omar_prime_fun(n, s - 1));
	}
	else if (s <= 1)
	{
		return (1);
	}
}
