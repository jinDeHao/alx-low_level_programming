#include "main.h"
/**
 *print_alphabet - Entry point
 *Explain: 'alpha'
 */
void print_alphabet(void)
{
	int alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
