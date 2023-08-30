#include "main.h"
#include <stdio.h>
int _sqroot(int n, int j);
/**
 * _sqrt_recursion - a function returns the natural square root of a number.
 * @n: the number to look for square root
 * Return: int square root value
 */
int _sqrt_recursion(int n)
{
	return (_sqroot(n, 1));
}
/**
 * _sqroot - a function that calculates square root of a number.
 * @n: the number to look for square root
 * @j: the iterative times
 * Return: int square root value
 */
int _sqroot(int n, int j)
{
	int sqroot = j * j;

	if (sqroot > n)
		return (-1);
	if (sqroot == n)
		return (j);
	return (_sqroot(n, j + 1));
}
