#include "main.h"

/**
 * swap_int - Swap tow integers
 * @a: First integer
 * @b: Second integer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
