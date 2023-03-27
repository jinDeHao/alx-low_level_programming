#include "main.h"
/**
 * puts_half - writes the half of string
 * @str: The character to prin
 */
void puts_half(char *str)
{
	int l, n;

	l = 0;
	while (*str != '\0')
	{
		str++;
		l++;
	}
	str -= (l - 1) / 2;
	for (n = (l - 1) / 2; n < l - 1; n++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
