#include "main.h"
/**
 * puts_half - writes the half of string
 * @str: The character to prin
 */
void puts_half(char *str)
{
	int l, n;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 0)
		n = (l - 1) / 2;
	else
		n = l / 2;
	n++;
	for (l = n; str[l] != '\0'; l++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
