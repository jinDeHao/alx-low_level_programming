#include "main.h"
/**
 * print_number - writes the character c to stdout
 * @n: The integer to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
	}
	if (n / 10 > 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + 48);
}
