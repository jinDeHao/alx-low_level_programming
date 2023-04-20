#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;
	char *separator = "", *str;

	va_start(args, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 's':
				str = va_arg(args, char*);
				printf("%s", separator);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			default:
				i++;
		}
		separator =", ";
		i++;
	}
	va_end(args);
	printf("\n");
}