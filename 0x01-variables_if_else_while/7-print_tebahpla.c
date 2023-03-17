#include <stdio.h>
/**
 *main - Entry point
 *Explain: 'alphABET'
 *Return: Always 0 (Success)
 */
int main(void)
{
	char mir, nl;

	nl = '\n';
	for (mir = 'z'; mir >= 'a'; --mir)
	{
		putchar(mir);
	}
	putchar(nl);
	return (0);
}
