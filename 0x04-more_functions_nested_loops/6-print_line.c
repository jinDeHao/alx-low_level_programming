#include "main.h"
/**
 * print_line - writes the character c to stdout
 * @n: The character to print
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
