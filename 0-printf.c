#include "holberton.h"

/**
* _printf - prints to stdout.
* @format: a character string.
* Return: the number of characters printed.
*/

int _printf(const char *format, ...)
{
	int i;
	va_list arguments;

	va_start(arguments, format);

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}

		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				_putchar(va_arg(arguments, int));
			}

		i++;

		}

	va_end(arguments);

	}

	return (0);

}
