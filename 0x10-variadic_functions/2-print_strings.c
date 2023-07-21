#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - funtion prints strings.
 * @separator: The string printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings NULL, print(nil) instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strgs;
	char *str;
	unsigned int index;

	va_start(strgs, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strgs, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strgs);
}
