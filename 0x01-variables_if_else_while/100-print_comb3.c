#include <stdio.h>
/**
 *main - Entry point
 *Explain: 'num poss'
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2, cm, sp, nl;

	nl = '\n';
	cm = ',';
	sp = ' ';
	for (n1 = 48; n1 <= 57; n1++)
	{
		for (n2 = 48; n2 <= 57; n2++)
		{
			if (n1 != n2 && n1 < n2)
			{
				putchar(n1);
				putchar(n2);
				if (n1 != 56 || n2 != 57)
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
