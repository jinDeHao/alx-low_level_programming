#include "main.h"
/**
 *print_alphabet_x10 - Entry point
 *Explain: 'alpha *10'
 */
void print_alphabet_x10(void)
{
	int time, alpha;

	for (time = 0; time <= 9; time++)
	{
		for (alpha = 97; alpha <= 122; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
