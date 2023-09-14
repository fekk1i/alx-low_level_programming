#include "main.h"
#include <stdio.h>

/**
 * print_sign - Entry point
 * @n: the character to be checker
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
	}
	else if (n == 0)
	{
		putchar('0');
	}
	else
	{
		putchar('-');
	}

	return ((n > 0) ? 1 : (n == 0) ? 0 : -1);
}
