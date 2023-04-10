#include <stdio.h>
#include "main.h"
/**
 * _atoi - writes the character c to stdout
 * @s: The pointer
 * Return: On success num
 * on error return 0
 */
int _atoi(char *s)
{
	int i = 0, d = 0, n = 0, len = 0, f = 0, digit = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;

			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - Entry point
 * @argc: num of argu
 * @argv: pointer to array of strings
 * Return: On success 0
 * on error 1 returned
 */
int main(int argc, char *argv[])
{
	int i, c = 0, sum = 0, b = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
			c = 1;

		if (c != 1)
		{
			sum += _atoi(argv[i]);
		}
		else
		{
			b = 1;
			break;
		}
	}
	if (b == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", sum);
		return (0);
	}
}
