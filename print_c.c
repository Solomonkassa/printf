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
	int count = 0, retval;

	retval = _putchar(C);
	if (retval == -1)
		return (-1);
	count++;

	return (count);
}
