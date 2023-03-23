#include "main.h"
/**
 * print_number - writes the character c to stdout
 * @n: The integer
 */
void print_number(int n)
{
	unsigned int num;

	num = n;
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num / 10 > 0)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + 48);
}
