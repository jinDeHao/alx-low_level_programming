#include <stdio.h>
/**
 *main - Entry point
 *Explain: 'alphABET ignore q & e'
 *Return: Always 0 (Success)
 */
int main(void)
{
	int alpha, nl;

	nl = '\n';
	for (alpha = 'a'; alpha <= 'z'; ++alpha)
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
	}
	putchar(nl);
	return (0);
}
