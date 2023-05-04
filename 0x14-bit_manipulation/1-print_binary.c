#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	int i = 63, c = 0;
	unsigned long int m;

	while (i >= 0)
	{
		m = n >> i;
		if (m & 1)
		{
			_putchar(49);
			c++;
		}
		else if (c)
			_putchar(48);
		i--;
	}
	if (!c)
		_putchar(48);
}
