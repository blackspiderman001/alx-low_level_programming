#include <stdio.h>
#include <stdlib.h>

/**
 * natural - prints the sum of all the multiples of 3 or 5 below 1024.
 * @int: Parameter.
 * Return: 0
 */

int main(void)
{
	int sum = 0;
	int i;

	for (i = 0 ; i < 1024 ; i++)
	{
		if (i % 3 == 0)
			sum = sum + i;
		if (i % 5 == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
}
