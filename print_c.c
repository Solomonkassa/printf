#include "main.h"

/**
 * print_c - print a char argument
 * @args: va_list containing the char to print as the next element
 *
 * Return: the number of bytes printed
 */

int print_c(va_list args)
{
	char C = va_arg(args, int);

	_putchar(C);

	return (C);
}
