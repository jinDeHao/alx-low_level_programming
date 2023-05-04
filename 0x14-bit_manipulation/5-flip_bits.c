#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: num1
 * @m: num2
 * Return: number of the deffirent bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 63, number = 0;
	unsigned long int ch;

	while (i >= 0)
	{
		ch = (n ^ m) >> i;
		if (ch & 1)
			number++;
		i--;
	}
	return (number);
}
