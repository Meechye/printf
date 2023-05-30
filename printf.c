#include "main.h"
#include <unistd.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * _printf - produces output according to a format
 * @format: is a character string
 * Return: number of characters printed except null bytes
 */

int _printf(const char *format, ...)
{
	int i;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (0);
	else
	{
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == 'c')
				{
					_putchar(va_arg(args, int));
					i++;
				}
				else if (format[i + 1] == 's')
				{
					print_string(va_arg(args, char *));
					i++;
				}
				else if (format[i + 1] == '%')
				{
					_putchar('%');
					i++;
				}
			}
			else
				_putchar(format[i]);
		}
	}
	va_end(args);
	return (i);
}
