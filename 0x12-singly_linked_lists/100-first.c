#include <stdio.h>
#include "lists.h"
void first_of_all(void) __attribute__ ((constructor));
/**
 * first_of_all - Entry point
 * Return: 0
 */
void first_of_all(void)
{
	char *txt = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";

	printf("%s", txt);
}
