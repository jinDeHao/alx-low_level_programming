#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
			sum += atoi(argv[i]);
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
