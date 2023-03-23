#include "main.h"
/**
 * _isdigit - writes the character c to stdout
 * @c: The character to check
 * Return: On success 1.
 * On error, 0 is returned.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
