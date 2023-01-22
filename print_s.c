#include "main.h"

/**
 * print_s - print a string or char argument
 * @args: va_list containing the string or char to print as the next element
 *
 * Return: the number of bytes printed
 */

int print_s(va_list args)
{
	
	char *p;
	int p_len;

	p = va_arg(list, char*);
	p_len = print((p != NULL) ? p : "(null)");

	return (p_len);
}
