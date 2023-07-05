#include "main.h"
/**
 * _pow_recursion -  a function that raises value of  x to the power of y
 * @x: the value to be multiplied
 * @y: the number of times to multiply
 * Return: the x value multiplied y times
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
