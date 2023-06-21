#include "main.h"
/**
* _abs - computes the absolute value of an integer.
* @c: number to be computed
* Return: absolute value or zero
*/

int _abs(int c)
{
	if (c < 0)
	{
		int absolute_val;

		absolute_val = c * -1;
		return (absolute_val);
	}
	return (c);
}
