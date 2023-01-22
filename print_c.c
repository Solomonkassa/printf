#include "main.h"

/**
 * print_c - print a char argument
 * @args: va_list containing the char to print as the next element
 *
 * Return: the number of bytes printed
 */

int print_c(va_list c)
{
unsigned char my_char;

	my_char = va_arg(c, int);
	_putchar(my_char);
	return (1);
}
