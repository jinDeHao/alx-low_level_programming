#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number given
 * @index: the bit wanted
 * Return: the value of the bit wanted
 * on error -1 returned
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int VoBaI;

	if (index >= 64)
		return (-1);
	VoBaI = (n >> index) & 1;
	return (VoBaI);
}
