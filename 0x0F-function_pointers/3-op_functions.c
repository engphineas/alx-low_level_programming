#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function to sum of two numbers.
 * @a: The first num.
 * @b: The second num
 *
 * Return: sum a + b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - fuction for difference of two numbers.
 * @a: The first num.
 * @b: The second num
 *
 * Return: The difference of a - b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function to multiply two numbers.
 * @a: The first num.
 * @b: The second num.
 *
 * Return: The product of a x b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function to divide two numbers.
 * @a: The first num.
 * @b: The second num.
 *
 * Return: The quotient of a / b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first num.
 * @b: The second num.
 *
 * Return: The remainder of the division of a % b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
