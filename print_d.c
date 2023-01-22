#include "main.h"
/**
  * print_d - prints decimal numbers,
  * positive and negative			  
  * @args: the number 
  *
  * Return: count
  */
int print_d(va_list args)
{
	int num = va_arg(args, int);
  
	int count = 0;
	int retval;
	unsigned int unsign;

	if (num < 0)
	{
		retval = _putchar('-');
		if (retval == -1)
		{
			return (-1);
		}
		count += 1;
		unsign = -num;

	}
	else if (num == 0)
	{
		retval = _putchar('0');
		if (retval == 1)
			return (1);
		else
			return (-1);
	}
	else
	{
		unsign = num;
	}

	retval = print_number(unsign);

	if (retval == 1)
	{
		count += countDigits(unsign);
	}
	else
		count = -1;
	return (count);
}
