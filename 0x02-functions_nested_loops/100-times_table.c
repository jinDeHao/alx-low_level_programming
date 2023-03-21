#include "main.h"
/**
 *print_times_table - Entry point
 *@n: times table integer
 *Explain: 'Learn your times table '
 */
void print_times_table(int n)
{
	int a, b, res;

	if (n < 100)
	{
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			res = a * b;
			if (res / 100 > 0)
			{
				_putchar(res / 100 + 48);
				_putchar((res / 10) % 10 + 48);
			}
			if ((res / 10) % 10 > 0 && res / 100 == 0)
			{
				_putchar((res / 10) % 10 + 48);
			}
			_putchar(res % 10 + 48);
			if (b != n)
			{
				_putchar(',');
				_putchar(' ');
				if ((res + a) / 100 == 0)
				{
					_putchar(' ');
				}
				if ((res + a) / 10 == 0)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
	}
}
