#include <stdio.h>
/**
 *main - Entry point
 *Explain: 'Abbaci'
 *Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long a, b, res, sum;

	a = 0;
	b = 1;
	res = a + b;
	sum = 0;
	while (res < 4000000)
	{
		if (res % 2 == 0)
		{
			res = a + b;
			sum += res;
			a = b;
			b = res;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
