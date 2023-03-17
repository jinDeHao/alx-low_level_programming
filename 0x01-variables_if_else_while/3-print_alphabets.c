#include <stdio.h>
/**
 *main - Entry point
 *Explain: 'alphABET'
 *Return: Always 0 (Success)
 */
int main(void)
{
	char alpha, ALPHA, nl;

	nl = '\n';
	for (alpha = 'a'; alpha <= 'z'; ++alpha)
	{
		putchar(alpha);
	}
	for (ALPHA = 'A'; ALPHA <= 'Z'; ++ALPHA)
	{
		putchar(ALPHA);
	}
	putchar(nl);
	return (0);
}
