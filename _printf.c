#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - produces output according to a format.
 * @format: A character string
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int count = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
		}
		else
		{
			_putchar(*format);
			count++;
			format++;
		}
	}
	va_end(args);
	return(count);
}
