#include "main.h"
/**
 *_isalpha - Entry point
 *@c: Letter check
 *Explain: 'alphABET'
 *Return: On success 1.
 *On error, 0 is returned.
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 97 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
