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
int _abs(int n);
{
	if (n < 0)
	{
		n = n * -1;
		_abs(n);
	}
	else
	{
		_abs(n);
	}
}
