#include <stdio.h>
/**
 * main - Entry point
 * @argc: num of arguments
 * @argv: pointer to array of strings
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
