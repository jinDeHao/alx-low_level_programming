#include <stdio.h>
/**
 *main - Entry point
 *Explain: 'alphABET'
 *Return: Always 0 (Success)
 */
int main(void)
{
	int num, nl, cm, sp;

	nl = '\n';
	cm = ',';
	sp = ' ';
	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num < 57)
		{
			putchar(cm);
			putchar(sp);
		}
	}
	putchar(nl);
	return (0);
}
