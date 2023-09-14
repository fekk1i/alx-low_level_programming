#include "main.h"
#include <stdio.h>

/**
 * print_sign - Entry point
 * @n: the character to be checker
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	int sign = 0;

	if (n > 0)
	{
		putchar('+');
		sign = 1;
	}
	else if (n == 0)
	{
		putchar('0');
	}
	else
	{
		putchar('-');
		sign = -1;
	}

	return (sign);
}
