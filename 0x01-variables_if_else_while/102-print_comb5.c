#include <stdio.h>
/**
 *main - Entry point
 *Explain: 'alphABET'
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2, cm, nl, sp;

	sp = ' ';
	cm = ',';
	nl = '\n';
	for (n1 = 0; n1 < 100; n1++)
	{
		for (n2 = 0; n2 < 100; n2++)
		{
			if (n1 != n2)
			{
				putchar((n1 / 10) + '0');
				putchar((n1 % 10) + '0');
				putchar(sp);
				putchar((n2 / 10) + '0');
				putchar((n2 % 10) + '0');
				if (n1 != 98 || n2 != 99)
				{
					putchar(cm);
					putchar(sp);
				}
			}
		}
	}
	putchar(nl);
	return (0);
}
