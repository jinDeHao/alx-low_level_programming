#include "main.h"
/**
 * swap_int - writes the character c to stdout
 * @a: The int to swap
 * @b: The int to swap
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
