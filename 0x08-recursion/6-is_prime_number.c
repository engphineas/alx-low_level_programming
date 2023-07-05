#include "main.h"
int prime_check(int n, int j);
/**
 * is_prime_number - returns if the input integer is a prime number.
 * @n: the input number to be checked
 * Return: 1 for prime number and 0 for other wise
 */
int is_prime_number(int n)
{
	return (prime_check(n, 1));
}
/**
 * prime_check - checks if the number is a prime number
 * @n: the input number to be checked
 * @j: the iteration times
 * Return: 1 for prime number and 0 for other wise
 */
int prime_check(int n, int j)
{
	if (n <= 1)
		return (0);
	if (n % j == 0 && j > 1)
		return (0);
	if ((n / j) < j)
		return (1);
	return (prime_check(n, j + 1));
}

