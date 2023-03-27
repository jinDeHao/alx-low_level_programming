#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @s: The pointer
 * Return: On success num
 * on error return 0;
 */
int _atoi(char *s)
{
	int num, l, seg, n;

	num = 0;
	seg = 1;
	for (l = 0; s[l] != '\0'; l++)
	{
		if (s[l] == 45)
		{
			seg *= -1
		}
		if (s[l] >= 48 && s[l] <= 57)
		{
			n = (s[l] - 48);
			t = l + 1;
			while (s[t] >= 48 && s[t] <= 57)
			{
				n *= 10;
				t++;
			}
			num += n;
		}
	}
	num *= seg;
}
