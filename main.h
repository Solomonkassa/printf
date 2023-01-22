#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 *   Authors &copy;
 *
 * - Solomon Kassa  https://github.com/Solomonkassa
 * - Nawwal Ismael  https://github.com/Newi-M
 *
 * struct type - connect conversion specifiers with the correct print function
 * @print: a function pointer for the print functions
 * @identifier: the conversion specifier
 */
typedef struct type
{
	char *hm;
	int (*print)(va_list);
} type_t;

int _printf(const char *format, ...);

#endif
