#include "main.h"
/**
 * puts2 - writes the character str
 * @str: The string to print
 */
void puts2(char *str)
{
	int *ref;

	*ref = str;
	while (*str != '\0' && str <= ref + 326)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
