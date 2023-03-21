#include "main.h"
/**
 *print_sign - Entry point
 *@n: print sign
 *Explain: 'Sign'
 *Return: positive 1.
 *Zero, 0 is returned.
 *negative, -1 is returned.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
