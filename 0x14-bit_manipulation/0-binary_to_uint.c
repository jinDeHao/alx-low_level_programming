#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string of binary
 * Return: the converted number.
 * on error 0 returned
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		num = 2 * num + (b[i] - 48);
		i++;
	}
	return (num);
}
