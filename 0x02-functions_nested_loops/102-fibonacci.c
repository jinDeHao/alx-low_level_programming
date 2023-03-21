#include <stdio.h>
/**
 *main - Entry point
 *Explain: 'Fibonacci numbers'
 *Return: Always 0 (Success)
 */
int main(void)
{
	int sum, i;

	sum = 1;
	for (i = 0; i < 50; i++)
	{
		printf("%d, ", sum);
		sum += sum;
	}
	printf("\n");
	return (0);
}
