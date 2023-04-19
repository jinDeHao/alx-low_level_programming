#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - the sum of a and b
 * @a: first num of arg
 * @b: seconf num of arg
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - the difference of a and b
 * @a: first num of arg
 * @b: seconf num of arg
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - product of a and b
 * @a: first num of arg
 * @b: seconf num of arg
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - the division of a by b
 * @a: first num of arg
 * @b: seconf num of arg
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of the division of a by b
 * @a: first num of arg
 * @b: seconf num of arg
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
