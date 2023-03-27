#include "main.h"
/**
 * puts2 - writes the character str
 * @str: The string to print
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
