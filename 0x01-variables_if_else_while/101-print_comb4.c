#include <stdio.h>
/**
 *main - Entry point
 *Explain: 'alphABET'
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2, n3, cm, sp, nl;

	cm = ',';
	nl = '\n';
	sp = ' ';
	for (n1 = 48; n1 <= 57; n1++)
	{
		for (n2 = 48; n2 <= 57; n2++)
		{
			for (n3 = 48; n3 <= 57; n3++)
			{
				if (n1 != n2 && n1 != n3 && n2 != n3 && n1 < n2 && n2 < n3)
				{
					putchar(n1);
					putchar(n2);
					putchar(n3);
					if (n1 != 55)
					{
						putchar(cm);
						putchar(sp);
					}
				}
			}
		}
	}
	putchar(nl);
	return (0);
}
