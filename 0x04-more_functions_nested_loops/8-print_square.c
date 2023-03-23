#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: The character to print
 */
void print_square(int size)
{
	int i, l;

	for (i = 0; i < size; i++)
	{
		for (l = 0; l < size; l++)
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
