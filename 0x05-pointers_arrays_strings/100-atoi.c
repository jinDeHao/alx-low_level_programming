#include "main.h"
/**
 * _atoi - writes the character c to stdout
 * @s: The pointer
 * Return: On success num
 * on error return 0;
 */
int _atoi(char *s)
{
	int num, l, brk, seg, n, t;
	int max = 0;

	num = 0;
	seg = 1;
	for (l = 0; s[l] != '\0'; l++)
	{
		if (s[l] == 45)
		{
			seg *= -1;
		}
		if (s[l] >= 48 && s[l] <= 57)
		{
			n = (s[l] - 48);
			t = l + 1;
			brk = 0;
			while (s[t] >= 48 && s[t] <= 57)
			{
				brk = 1;
				n *= 10;
				t++;
			}
			if (num >= 2147483640 && n == 8)
			{
				max = 1;
				num += 7;
			}
			else
			{
				num += n;
			}
		}
		if (brk == 0)
		{
			break;
		}
	}
	if (max == 1)
	{
		num = (num * seg) - 1;
	}
	else
	{
		num *= seg;
	}
	return (num);
}
