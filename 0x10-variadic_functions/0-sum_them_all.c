#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - the sum of all its parameters
 * @n: number of number
 * Return: the sum
 * on error 0 returned
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, unsigned int);
	}
	va_end(args);
	return (sum);
}
