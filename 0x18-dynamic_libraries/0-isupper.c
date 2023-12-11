#include "main.h"
/**
 * _isupper - Function for uppercase letters
 * @c: character to check for case
 *
 * Return: 0 or success 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
