#include "main.h"
/**
 *jack_bauer - Entry point
 *Explain: 'I m federal agent Jack Bauer'
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			_putchar(a / 10 + 48);
			_putchar(a % 10 + 48);
			_putchar(58);
			_putchar(b / 10 + 48);
			_putchar(b % 10 + 48);
			_putchar('\n');
		}
	}
}
