#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 *@a: paramter
 * @b: parameter 2
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
	{
		int third = *a;
		*a = *b;
		*b = third;
	}
