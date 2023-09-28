#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 if success and -1 if error
 * Or error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
