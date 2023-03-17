#include <stdio.h>
/**
 *main - Entry point
 *Explain: 'alphABET'
 *Return: Always 0 (Success)
 */
int main(void)
{
	char num, nl;

	nl = '\n';
	for (num = 48; num <= 102; num++)
	{
		if (num <= 57 || num >= 97)
			putchar(num);
	}
	putchar(nl);
	return (0);
}
