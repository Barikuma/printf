#include "main.h"

/**
 * _putint - prints an integer on the standard output
 * @n: integer to print
 * Return: the length of numbers passed
 */

int _putint(int n)
{
	unsigned int num = n;
	int len = 0;

	if (!num)
	{
		_putchar('0' + 0);
		return (1);
	}

	if (n < 0)
	{
		len += _putchar('-');
		num = -n;
	}

	if ((num / 10) > 0)
	{
		_putint((num / 10));
	}
	_putchar('0' + (num % 10));

	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}
