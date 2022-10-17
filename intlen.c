#include "main.h"

/**
 * intlen - counts the number of digits in an integer
 * @num: number to count
 * Return: the length of the integer
 */

int intlen(int num)
{
	unsigned int n = num;
	int len = 0;

	if (num < 0)
	{
		len++;
		n = -num;
	}
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}
