#include "main.h"
/**
 * print_rev - writes the string reverse
 * @s: The string to revers
 */
void print_rev(char *s)
{
	int l;

	l = 0;
	while (*s != '\0')
	{
		s++;
		l++;
	}
	s--;
	while (l > 0)
	{
		_putchar(*s);
		s--;
		l--;
	}
	_putchar('\n');
}
