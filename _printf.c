#include "main.h"

/**
 * _printf - produces output according to a format.
 *
 * @format: is a character string
 *
 * Description: Receives the main string and all the necessary parameters to
 * print a formated string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, count = 0;

	print_d data[] = {
		{"c", print_char},
		{"s", print_string}
	};
	va_start(args, format);
	if (!format)
		return (-1);
	i = 0;
	while (format && *(format + i))
	{
		if (format[i] == '%' && (!format[i + 1] || format[i + 1] == ' '))
			return (-1);
		else if (*(format + i) == '%' && *(format + i + 1) == 'c')
		{
			count = count + data[0].f(args);
			i++;
		}
		else if (*(format + i) == '%' && *(format + i + 1) == 's')
		{
			count = count + data[1].f(args);
			i++;
		}
		else if (*(format + i) == '%' && *(format + i + 1) == '%')
		{
			count = count + _putchar('%');
			i++;
		}
		else
		{
			_putchar(*(format + i));
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
