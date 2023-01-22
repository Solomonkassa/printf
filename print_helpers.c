#include "main.h"
/**
  * print_number - we're printing some serious numbers
  * @n: that's the number, fear it.
  *
  * Return: void
  */
int  print_number(unsigned int n)
{
	int retval;
	unsigned int num = n;

	if (num / 10)
		print_number(num / 10);
	retval = _putchar('0' + num % 10);
	if (retval == -1)
	{
		return (retval);
	}
	return (retval);
}

/**
* countDigits - count how many digits the number is
* @num: the number
*
* Return: the count
*/
int countDigits(unsigned int num)
{
	int count = 0;

	while (num > 0)
	{
		count++;
		num /= 10;
	}
	return (count);
}
/**
* countOctal - count how many digits the number is
* @num: the number
*
* Return: the count
*/
int countOctal(unsigned int num)
{
	int count = 0;

	while (num > 0)
	{
		count++;
		num /= 8;
	}
	return (count);
}
/**
* countBinary - count how many digits the number is
* @num: the number
*
* Return: the count
*/
int countBinary(unsigned int num)
{
	int count = 0;

	while (num > 0)
	{
		count++;
		num /= 2;
	}
	return (count);
}

/**
 * _strlen - count the number of characters in a string
 * @str: pointer to a string
 *
 * Return: number of characters in the string
 */

int _strlen(char *str)
{
	int count = 0;

	while (*(str + count))
		count++;

	return (count);
}
