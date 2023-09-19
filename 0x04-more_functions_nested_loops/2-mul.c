#include "main.h"
#include <stdio.h>

/**
 * mul - Entry point
 * @a: the character to be checker
 * @b: the second character
 * Return: Always 0 (Success)
 */
int mul(int a, int b)
{
	int result = a * b;
	printf("%d multiplied by %d is %d\n", a, b, result);
	return (0);

}
