#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int x = '0';

	while (x <= '9')
	{
		printf("%d\n", x);
		x++;
	}

}
