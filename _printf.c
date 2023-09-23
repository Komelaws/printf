#include "main.h"

/**
 * _printf - Function that prints to screen
 * @format: The specifiers
 *
 * Return: 1 on success. Otherwise 0
 */
int _printf(const char *format, ...)
{
	int num, j, i;
	char *s;
	va_list list;

	va_start(list, format);
	num = strlen(format);
	i = 0;
	j = 0;

	while (i < num)
	{
		if (format[j] == '%')
		{
			j++;
			if (format[j] == 's')
			{
				printf("%s", va_arg(list, const char *));
			}
			else if (format[j] == 'c')
			{
				printf("%c", va_arg(list, const char *));
			}
		}
		i++;
	}

	return (0);
}
