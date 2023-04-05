#include "main.h"
/**
 * factorial - the factorial of a given number
 * @n: given number
 * Return: On success n.
 * On error, -1 is returned.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n <= 1)
			return (1);

		return (n * factorial(n - 1));
	}
}
