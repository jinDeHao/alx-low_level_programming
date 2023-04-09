#include <stdio.h>
/**
 * main - Entry point
 * @argc: num of argu
 * @argv: pointer of array of string
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
