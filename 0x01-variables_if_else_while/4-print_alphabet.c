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
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}
	putchar('\n');

	return (0);
}
