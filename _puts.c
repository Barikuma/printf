#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string on the standard output
 * @str: string to print
 * Return: The length of the string
 */

int _puts(char *str)
{
	char *s = str;
	int i = 0;

	if (!s)
		s = "(null)";

	while (s[i])
		_putchar(s[i++]);

	return (i);
}
