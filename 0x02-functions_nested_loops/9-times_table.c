#include "main.h"
/**
 *times_table - Entry point
 *Explain: 'Learn your times table '
 */
void times_table(void)
{
	int num, time, ds, res, nd, s;

	for (num = 0; num <= 9; num++)
	{
		for (time = 0; time <= 9; time++)
		{
			res = num * time;
			ds = res / 10;
			s = res + num;
			nd = s / 10;
			if (ds != 0)
			{
				_putchar(ds + 48);
			}
			_putchar(res % 10 + 48);
			if (time != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (nd == 0 && time != 9)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
