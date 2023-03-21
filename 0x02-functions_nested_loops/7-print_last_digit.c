#include "main.h"
/**
 *print_last_digit - Entry point
 *@i: the number.
 *Explain: 'prints the last digit of a number'
 *Return: Always ld (Success)
 */
int print_last_digit(int i)
{
	int ld;

	ld = i % 10;
	if (ld < 0)
	{
		ld = -1 * ld;
	}
	_putchar(ld + 48);
	return (ld);
}
