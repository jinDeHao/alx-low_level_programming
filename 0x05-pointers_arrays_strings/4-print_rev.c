#include "main.h"
/**
 * print_rev - writes the string reverse
 * @s: The string to revers
 */
void print_rev(char *s)
{
	int l;

	l = s;
	while (*s != '\0')
	{
		s++;
	}
	while (s >= l)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
