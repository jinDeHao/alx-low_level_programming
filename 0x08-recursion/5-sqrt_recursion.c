#include "main.h"
/**
 * _sqrt_recursion - the natural square root of a number.
 * @n: the number
 * Return: the natural square root of n
 * On error, -1 is returned.
 */
int _sqrt_recursion(int n)
{
	return (i_need_this(n, 0));
}

/**
 * i_need_this - function added
 * @n: the number
 * @s: root
 * Return: the natural square root of n
 * On error, -1 is returned.
 */
int i_need_this(int n, int s)
{
	if (s * s = n)
	{
		return (s);
	}
	else if (s > n)
	{
		return (-1);
	}
	else
	{
		return (i_need_this(n, s + 1));
	}
}
