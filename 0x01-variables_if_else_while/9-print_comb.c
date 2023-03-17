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
	for (num = 48; num < 57; num++)
	{
		putchar(num);
		putchar(cm);
		putchar(sp);
	}
	putchar(57);
	return (0);
}
