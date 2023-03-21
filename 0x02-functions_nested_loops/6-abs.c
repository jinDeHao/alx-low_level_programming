#include "main.h"
/**
 *_abs - Entry point
 *@i: the absolute value of the integer.
 *Explain: 'computes the absolute value of an integer'
 *Return: Always i (Success)
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = -1 * i;
	}
	return (i);
}
