#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - prints all data types of characters on the standard output
 *		including the format
 * @format: characters to print
 * Return: the length of the format variable
 */

int _printf(const char *format, ...)
{
	va_list args;
	int len = 0, i = 0;

	char next, current;

	va_start(args, format);
	
	if (format == NULL)
		return -1;
	while (format[i])
	{
		current = format[i];
		next = format[i + 1];

		if (current == '%' && next == 'c')
		{
			_putchar((char)va_arg(args, int)), len++, i++;
		}
		else if (current == '%' && next == 's')
		{
			_puts((char *)va_arg(args, char *)), len++, i++;
		}
		else if (current == '%' && next == '%')
		{
			_putchar('%'), len++, i++;
		}
		else if (current == '%' && next == 'd')
		{
			_putint(va_arg(args, int)), len++, i++;
		}
		else if (current == '%' && next == 'i')
		{
			_putint(va_arg(args, int)), len++, i++;
		}
		else
		{
			_putchar(format[i]), len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
