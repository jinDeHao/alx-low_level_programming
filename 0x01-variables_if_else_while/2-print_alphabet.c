#include <stdio.h>
/**
 *main - Entry point
 *Explain: 'alphabet'
 *Return: Always 0 (Success)
 */
int main(void)
{
	char alpha, nl;

	nl = '\n';
	for (alpha = 'a'; alpha <= 'z'; ++alpha)
	{
		putchar(alpha);
	}
	putchar(nl);
	return (0);
}
