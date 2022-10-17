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
	int len = 0, i = 0, tmp;
	char next, current, *str;

	va_start(args, format);

	if (format == NULL)
		return (-1);
	while (format[i])
	{
		current = format[i];
		next = format[i + 1];

		if (current == '%' && next == 'c')
			_putchar((char)va_arg(args, int)), len++, i++;

		else if (current == '%' && next == 's')
		{
			str = (char *)va_arg(args, char *);
			if (!str)
			{
				str = "(null)";
				_puts(str), len += _strlen(str), i++;
			}
			else
				_puts(str), len += _strlen(str), i++;
		}
		else if (current == '%' && next == '%')
			_putchar('%'), len++, i++;
		else if (current == '%' && (next == 'd' || next == 'i'))
		{
			tmp = va_arg(args, int);
			_putint(tmp), len += intlen(tmp), i++;
		}
		else
			_putchar(format[i]), len++;
		i++;
	}
	va_end(args);
	return (len);
}
