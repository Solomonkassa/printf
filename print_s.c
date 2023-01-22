#include "main.h"

/**
 * print_s - print a string or char argument
 * @args: va_list containing the string or char to print as the next element
 *
 * Return: the number of bytes printed
 */

int print_s(va_list s)
{
	char *my_string;
	int  i = 0;

	my_string = va_arg(s, char *);
	if (my_string == NULL)
		my_string = "(null)";
	while (my_string[i])
	{
		_putchar(my_string[i]);
		i++;
	}
	return (i);
}
