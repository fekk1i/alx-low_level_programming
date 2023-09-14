#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * print_alphabet - Prints the alphabet in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
