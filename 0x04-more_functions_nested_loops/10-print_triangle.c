#include "main.h"
/**
 * print_triangle - writes the character c to stdout
 * @size: The size of triangle
 */
void print_triangle(int size)
{
	int i, l, n;

	for (i = 1; i <= size; i++)
	{
		for (l = size; l > i; l--)
		{
			_putchar(' ');
		}
		for (n = 1; n <= i; n++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
