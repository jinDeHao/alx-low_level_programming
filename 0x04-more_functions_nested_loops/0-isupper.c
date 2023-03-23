#include "main.h"
/**
 * _isupper - writes the character c to stdout
 * @c: The character to check
 * Return: On success 1.
 * On error, 0 is returned.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
