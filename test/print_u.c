#include "main.h"
/**
  * print_u - prints unsigned ints
  * @args: the args list
  *
  * Return: chars printed or -1
  */
int print_u(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int digits = num;
	int count = 0;
	int retval;

	if (num < 1)
	{
		_putchar('0');
		return (1);
	}
	retval = print_number(num);
	if (retval == 1)
	{
		count += countDigits(digits);
	}
	else
		count = -1;
	return (count);
}
