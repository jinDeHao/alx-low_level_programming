#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: num of argument
 * @argv: pointer to array of string
 * Return: Always 0 (Success)
 * on error 1 returned
 */
int main(int argc, char *argv[])
{
	int i, n = 0;

	if (argc == 2)
	{
		i = atoi(argv[1]);
		if (i >= 25)
		{
			n += i / 25;
			i = i % 25;
		}
		if (i >= 10)
		{
			n += i / 10;
			i = i % 10;
		}
		if (i >= 5)
		{
			n += i / 5;
			i = i % 5;
		}
		if (i >= 2)
		{
			n += i / 2;
			i = i % 2;
		}
		if (i >= 1)
			n++;

		printf("%d\n", n);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
