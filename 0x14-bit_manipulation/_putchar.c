#include <unistd.h>
#include "main.h"
/**
* _putchar - writes the character c to stdout
* @c: The character to be printed
* Return: on Success 1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
