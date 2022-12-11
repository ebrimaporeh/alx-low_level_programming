#include <stdio.h>

/**
 * main - a program thats prints the alphabets in lowercase in new lines
 * Return: Always (0)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	putchar("\n");
	return (0);
}


