#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_sign - Entry point
 * @n: the character to be checker
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
	}

	return (-1);
}
