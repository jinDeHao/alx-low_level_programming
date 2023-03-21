#include "main.h"
/**
 *print_to_98 - Entry point
 *@n: the absolute value of the integer.
 *Explain: '98 Battery Street, the OG'
 */
void print_to_98(int n)
{
	int a, de, hn;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			de = a / 10;
			if (a < 0)
			{
				_putchar(45);
			}
			if (de != 0)
			{
				_putchar(de + 48);
			}
			_putchar(a % 10 + 48);
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			hn = a / 100;
			if (hn != 0)
			{
				_putchar(hn + 48);
			}
			_putchar(a / 10 + 48);
			_putchar(a % 10 + 48);
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
