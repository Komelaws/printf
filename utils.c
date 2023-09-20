#include <stdio.h>
#include "_putchar.h"
#include <stdarg.h>
#include "utils.h"
#include "utilsnum.h"

/**
 * print_int - prints int
 * @args: arguments from print_all
 * @return: length of printed string
 */
int print_int(va_list args)
{
	int i = 0;
	int len = 0;
	int f = va_arg(args, int);
	char buffer[50];
	itoa(f, buffer);
	
	for ( i = 0; buffer[i] != '\0'; i++ )
	{
		_putchar(buffer[i]);
		len++;
	}
	return (len);
}

/**
 * print_float - prints float
 * @args: arguments from print_all
 * @return: The length of printed string
 */
int print_float(va_list args)
{
	int i = 0;
	int len = 0;
	double f = va_arg(args, double);
	char buffer[50];
	ftoa(f, buffer, 3);
	for (i = 0; buffer[i] != '\0'; i++)
	{
		_putchar(buffer[i]);
		len++;
	}
	return (len);
}
