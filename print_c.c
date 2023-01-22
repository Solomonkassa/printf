#include "main.h"

/**
 * print_c - print a char argument
 * @args: va_list containing the char to print as the next element
 *
 * Return: the number of bytes printed
 */

int print_c(va_list args)
{
	int aux;

	aux = va_arg(list, int);

	_putchar(aux);

	return (1);
}
