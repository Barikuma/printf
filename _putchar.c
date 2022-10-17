#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints a character on the screen
 * @c: the character to print
 * Return: decimal equivalent of the character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
