#include "main.h"

/**
 *  _abs - A function that computes the absolute value of an integer.
 *  @a: Parameter.
 *  Return: -a or a
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else
		return (a);
}
