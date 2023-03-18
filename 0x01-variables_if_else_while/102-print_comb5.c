#include <stdio.h>
/**
 *main - Entry point
 *Explain: 'alphABET'
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2, n3, n4, cm, nl, sp;

	sp = ' ';
	cm = ',';
	nl = '\n';
	for (n1 = 48; n1 <= 57; n1++)
	{
		for (n2 = 48; n2 <= 57; n2++)
		{
			for (n3 = 48; n3 <= 57; n3++)
			{
				for (n4 =  48; n4 <= 57; n4++)
				{
					if (n1 <= n3 && n2 < n4)
					{
					putchar(n1);
					putchar(n2);
					putchar(sp);
					putchar(n3);
					putchar(n4);
					if (n1 != 57 || n2 != 56)
					{
						putchar(cm);
						putchar(sp);
					}
					}
				}
			}
		}
	}
	putchar(nl);
	return (0);
}
