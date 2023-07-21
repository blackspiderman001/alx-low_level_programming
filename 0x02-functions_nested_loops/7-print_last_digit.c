#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num: the int to extract the last digit from
 * Return: value of the last digit
 */

int print_last_digit(int num)
{
	int k;

	k = (num % 10);
	if (num < 0)
		return (-k);
	else
		return (k);
	_putchar(k + '0');
}
