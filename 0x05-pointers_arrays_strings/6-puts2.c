#include "main.h"
/**
 * puts2 - writes the character str
 * @str: The string to print
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		str += 2;
		_putchar(*str);
	}
	_putchar('\n');
}
