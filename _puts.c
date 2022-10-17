#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string on the standard output
 * @str: string to print
 * Return: void
 */

int _puts(char *str)
{
	int len = _strlen(str);

	write(1, str, len);

	return (len);
}
