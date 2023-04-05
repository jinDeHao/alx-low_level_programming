#include "main.h"
/**
 * is_palindrome - if a string is a palindrome
 * @s: string
 * Return: On success 1
 * other ways 0 returned
 */
int is_palindrome(char *s)
{
	return (omar_palindrome(char *s, _strlen_recursion(char *s) - 2));
}

/**
 * omar_palindrome - if a string is a palindrome
 * @s: string
 * @a: difference
 * Return: On success 1
 * other ways 0 returned
 */
int omar_palindrome(char *s, int i)
{
	if (i < 0)
	{
		return (0);
	}
	else if (*s == *(s + i))
	{
		if (i == 0)
			return (1);
		else
		{
			return (omar_palindrome(*(s + 1), i - 2));
		}
	}
	else
		return (0);
}
