#include <stdio.h>
#include <stdarg.h>
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
	
	int count; /*counts the number of characters printed*/

	va_start(args, format);
	
	count = 0;
	

	while (*format != '\0') /*as long as the characters are not null byte*/
	{
		if (*format == '%')  /*note when the program encounters a "%"*/
		{
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
		}
		else if (*format == '%')
		{
			/*Print '%'*/
			_putchar('%');
			count++;				
		}
		else
		{
			/*Print any other character*/
			_putchar(*format);
			count++;
		}
		format++;
	}

	va_end(args);
	return (count);
}
