#include <stdio.h>
/**
 *main - Entry point
 *Explain: 'first 98 Fibonacci numbers'
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long sum, a, b, l;

	l = 1000000000;
	a = 0;
	b = 1;
	for (i = 0; i < 98; i++)
	{
		sum = a + b;
		if (i < 92)
		{
			printf("%lu", sum);
		}
		else if (i >= 92)
		{
			printf(", %lu", ((b / l) + ((b % l) / l)));
			printf("%lu", (b % l) % l);
		}
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
