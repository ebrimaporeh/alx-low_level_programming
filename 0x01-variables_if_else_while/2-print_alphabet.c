#include <stdio.h>

/**
 * main - prints lowercase letters
 *
 * Return: Always 0
 */

int main (void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

		putchar(letter);

	putchar('\n');

	return (0);
}
