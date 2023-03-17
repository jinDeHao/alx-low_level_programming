#include <stdio.h>
/**
 *main - Entry point
 *Explain: 'alphABET'
 *Return: Always 0 (Success)
 */
int main(void)
{
	int num, nl;

	nl = '\n';
	for (num = 0; num <= 9; num++)
	{
		putchar(num + 48);
	}
	putchar(nl);
	return (0);
}
