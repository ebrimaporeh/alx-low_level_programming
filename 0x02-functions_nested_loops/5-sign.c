#include "main.h"

/**
 * print_sign  - checks for the sign of n
 * @n: the number of the sign to be printed
 * Return: 1 ifn is positive, 0 if n is 0 and -1 is n c negative
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
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
