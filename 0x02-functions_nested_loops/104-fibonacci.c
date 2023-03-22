#include <stdio.h>
/**
 *main - Entry point
 *Explain: 'first 98 Fibonacci numbers'
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long sum, a, b;

	a = 0;
	b = 1;
	for (i = 0; i < 98; i++)
	{
		sum = a + b;
		printf("%lu", sum);
		a = b;
		b = sum;
		if (i != 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
