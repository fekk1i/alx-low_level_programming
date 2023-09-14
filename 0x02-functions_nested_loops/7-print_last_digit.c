#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _abs - Entry point
 *
 * @n: value
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n = -n;
	}

	last_digit = n % 10;

	_putchar('0' + last_digit);

	return (last_digit);
}
