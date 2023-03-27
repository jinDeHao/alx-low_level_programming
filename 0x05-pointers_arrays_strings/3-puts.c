#include "main.h"
/**
 * _puts - writes the string str to stdout
 * @str: The string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
