<<<<<<< HEAD
#include <stdio.h>
#include <stdarg.h>
#include "main.h"
=======
#include "main.h"

>>>>>>> 08ea690ad983b2f6d14cf1e62b08cb3ebc92126d
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
<<<<<<< HEAD
	
	int count; /*counts the number of characters printed*/
=======
	int i, count = 0;
>>>>>>> 08ea690ad983b2f6d14cf1e62b08cb3ebc92126d

	print_d data[] = {
		{"c", print_char},
		{"s", print_string}
	};
	va_start(args, format);
<<<<<<< HEAD
	
	count = 0;
	

	while (*format != '\0') /*as long as the characters are not null byte*/
=======
	if (!format)
		return (-1);
	i = 0;
	while (format && *(format + i))
>>>>>>> 08ea690ad983b2f6d14cf1e62b08cb3ebc92126d
	{
		if (format[i] == '%' && (!format[i + 1] || format[i + 1] == ' '))
			return (-1);
		else if (*(format + i) == '%' && *(format + i + 1) == 'c')
		{
<<<<<<< HEAD
			format++; /*Move past '%'*/
		}

		else if (*format == 'c')
		{
			/*print a character*/
			int c = va_arg(args, int);

			_putchar(c);
			count++;
		}
		else if (*format == 's')
		{
			/*print a string*/
			char *s = va_arg(args, char *);

			while (*s != '\0')
			{
				_putchar(*s);
				s++;
				count++;
			}

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
		else if (*format == '%')
		{
			/*Print '%'*/
			_putchar('%');
			count++;				
		}
		else
		{
			_putchar(*(format + i));
			count++;
		}
<<<<<<< HEAD
		format++;
	}

=======
		i++;
	}
>>>>>>> 08ea690ad983b2f6d14cf1e62b08cb3ebc92126d
	va_end(args);
	return (count);
}
