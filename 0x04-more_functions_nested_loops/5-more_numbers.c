#include "main.h"
/**
 *more_numbers - writes the character c to stdout
 */
void more_numbers(void)
{
	int a;

	for (a = 0; a <= 14; a++)
	{
		if (a < 9)
		{
			_putchar(a / 10 + 48);
		}
		_putchar(a % 10 + 48);
	}
	_putchar('\n');
}
