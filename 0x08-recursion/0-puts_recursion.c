#include "main.h"
/**
 * _puts_recursion - function that prints a string
 * @s: pointer to string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(*s);
	}
}
