#include "main.h"

/**
 * _putint - prints an integer on the standard output
 * @n: integer to print
 * Return: void
 */

void _putint(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}

	if ((num / 10) > 0)
	{
		_putint((num / 10));
	}
	_putchar('0' + (num % 10));
}
