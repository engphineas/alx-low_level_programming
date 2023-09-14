#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function to sum of all its paramters.
 * @n: The number of params passed to the function.
 * @...: variable number of params to sum up.
 *
 * Return: 0 If n == 0 .
 *         else - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int j, sum = 0;

	va_start(add, n);
	for (j = 0; j < n; j++)
		sum += va_arg(add, int);
	va_end(add);
	return (sum);
}
