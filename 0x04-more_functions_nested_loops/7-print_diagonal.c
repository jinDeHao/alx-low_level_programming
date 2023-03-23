#include "main.h"
/**
 * print_diagonal - I am diagonally parked in a parallel universe
 * @n: The time to print
 */
void print_diagonal(int n)
{
	int i, s;

	for (i = 0; i < n; i++)
	{
		for (s = 0; s < i; s++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
