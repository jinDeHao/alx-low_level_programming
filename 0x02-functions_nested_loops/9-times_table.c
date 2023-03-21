#include "main.h"
/**
 *times_table - Entry point
 *Explain: 'Learn your times table '
 */
void times_table(void)
{
	int num, time, ds, res, nds;

	for (num = 0; num <= 9; num++)
	{
		for (time = 0; time <= 9; time++)
		{
			res = num * time;
			ds = res / 10;
			nds = (res + time) / 10
			if (ds != 0)
			{
				_putchar(ds + 48);
			}
			_putchar(res % 10 + 48);
			_putchar(',');
			_putchar(' ');
			if (nds == 0)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
