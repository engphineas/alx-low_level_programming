#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - funtion prints strings.
 * @separator: The string printed between strings.
 * @n: The number of strings passed to the function.
 * @...: a number of strings to be printed.
 *
 * Description: If separator == NULL, its not printed.
 *              If any of strings is NULL,nil is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strgs;
	char *str_ptr;
	unsigned int j;

	va_start(strgs, n);

	for (j = 0; j < n; j++)
	{
		str_ptr = va_arg(strgs, char *);

		if (str_ptr == NULL)
			printf("(nil)");
		else
			printf("%s", str_ptr);

		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strgs);
}
