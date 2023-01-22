#include "main.h"
/**
  * print_F - prints FUCK
  * @args: the arguments, but they don't matter
  *
  * Return: characters printed
  *
  */
int print_F(__attribute__ ((unused))va_list args)
{
	char *F = "FUCK";
	int retVal = 0;
	int i;

	for (i = 0; i < 4; i++)
	{
		retVal = _putchar(F[i]);
	if (retVal == -1)
		return (retVal);
	}
	return (4);
}
