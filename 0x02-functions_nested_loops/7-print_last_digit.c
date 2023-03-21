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

	ld = i % 10 + 48;
	_putchar(ld);
	return (ld);
}
