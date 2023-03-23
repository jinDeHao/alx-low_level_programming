#include <stdlib.h>
#include <stdio.h>
/**
 *main - Entry point
 *Explain: 'prime factory'
 *Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long num, div;

	num = 612852475143;
	while (div < (num / 2))
	{
		if (num % 2 == 0)
		{
			num /= 2;
		}
		for (div = 3; div < (num / 2); div += 2)
		{
			if (num % div == 0)
			{
				num /= div;
			}
		}
	}
	printf("%lu\n", num);
	return (0);
}
