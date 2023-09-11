#include <stdio.h>


/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	char caps;

	for (letter = 'a' ; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (caps = 'A' ; caps <= 'Z'; caps++)
	{
		putchar(caps);
	}

	putchar('\n');

	return (0);
}
