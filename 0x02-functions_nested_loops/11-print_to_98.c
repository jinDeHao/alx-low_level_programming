#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - Entry point
 *@n: the absolute value of the integer.
 *Explain: '98 Battery Street, the OG'
 */
void print_to_98(int n)
{
	int a;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a != 98)
			{
				printf("%d, ", a);
			}
			else if (a == 98)
			{
				printf("%d\n", a);
			}
		}
	}
	else if (n >= 98)
	{
		for (a = n; a >= 98; a--)
		{
			if (a != 98)
			{
				printf("%d, ", a);
			}
			else if (a == 98)
			{
				printf("%d\n", a);
			}
		}
	}
}

