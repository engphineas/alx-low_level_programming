#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints everything
 * @format: a list of types of arguments passed in the function
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *string, *sep = "";

	va_list listing;

	va_start(listing, format);

	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", sep, va_arg(listing, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(listing, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(listing, double));
					break;
				case 's':
					string = va_arg(listing, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", sep, string);
					break;
				default:
					j++;
					continue;
			}
			sep = ", ";
			j++;
		}
	}
	printf("\n");
	va_end(listing);
}

