#include "main.h"
/**
 * _pow_recursion - the value of x raised to the power of y
 * @x: number
 * @y: power
 * Return: the value of x raised to the power of y
 * On error, -1 is returned.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
