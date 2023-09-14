#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers.
 * @separator: string to be printed between numbers as a seperator.
 * @n: The num of ints passed to the function.
 * @...: number of variable numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int j;

	va_start(numbers, n);
	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(numbers, int));
		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
