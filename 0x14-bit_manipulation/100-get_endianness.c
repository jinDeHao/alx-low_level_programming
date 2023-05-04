#include "main.h"
/**
 * get_endianness - checks the endianness.
 * Return: 0 when big endian
 * if little endian 1 returned
 */
int get_endianness(void)
{
	int i = 1;
	char *ptr = (char *) &i;
	return (*ptr);
}
