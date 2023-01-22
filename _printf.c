#include "main.h"

/**
 * _printf - print output to stdout according to a format string
 * @format: the format of the string to print
 *
 * Description: This program emulates some of the functionality of the standard
 * printf function. It does not handle precision, field width, or any of the
 * flags. It does handle all of the format specifiers except "%f" plus some
 * special format specifiers: "%b" prints a number in binary, "%R" encodes a
 * string in ROT13, and "%r" prints a string in reverse. %F is just a little
 * joke that allows you to print an expletive regardless of what you pass the
 * function `print_F`
 *
 * Return: number of characters printed (excluding null byte)
 */

int _printf(const char *format, ...)
{
	int i = 0;
	va_list rm;
	int (*function)(va_list) = NULL;

	va_start(rm, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) != '%')
		{
			format++;
			function = get_function(format);
			if (*(format) == '\0')
				return (-1);
			else if (function == NULL)
			{
				_putchar(*(format - 1));
				_putchar(*format);
				i += 2;
			}
			else
				i += function(args);
		}
		else if (*format == '%' && *(format + 1) == '%')
		{
			format++;
			_putchar('%');
			i++;
		}
		else
		{
			_putchar(*format);
			i++;
		}

		format++;
	}
	va_end(rm);
	return (i);
}
